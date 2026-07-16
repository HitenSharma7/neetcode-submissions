class Solution {
public:
bool isAlphaNum(char ch){
    if(ch>='0' && ch<='9' || tolower(ch) >='a' && tolower(ch)<= 'z'){
        return true; //If AlphaNumeric(Special characters)
    }
    else{
        return false;
    }
}
    bool isPalindrome(string s) {
      int n =s.length();
      int i=0; //Coming from front
      int j=n-1; //Coming from back
      while(i<j){
        if(!isAlphaNum(s[i])){
            i++;   //Increment the front pointer if Special Character encountered from front side...
            continue;

        }
        if(! isAlphaNum(s[j])){
             j--;   //Decrement from back if encountered a special character..
             continue;
        }
        if(tolower(s[i])!=tolower(s[j])){
            return false;  //If words arent equal it aint a palindrome dude
        }
        i++;
        j--;
      }
      return true;
    }
};

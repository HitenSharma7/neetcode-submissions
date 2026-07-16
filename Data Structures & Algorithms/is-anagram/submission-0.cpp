class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m=t.size();
        //If size is different they cant be anagrams
        if(n!=m){ return false;}
      vector<int> freq(26);
      for(char &ch : s){
         freq[ch - 'a']++;
      }
      for(char &ch : t){
         freq[ch - 'a']--;
      }

      bool allZeroes=all_of(begin(freq),end (freq),[](int element){
        return element==0;
      });
       return allZeroes;
    }
   
};

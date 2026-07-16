class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         int n=numbers.size();
         int i =0;
         int j =n-1;
         int Pair_Sum;
         while(i<j){
            Pair_Sum=numbers[i]+numbers[j];

            if(Pair_Sum>target ){
                j--;
            }
            else if(Pair_Sum<target){
                i++;
            }
            else{
                return {i+1,j+1};
            }
         }
         return {};
    }
};

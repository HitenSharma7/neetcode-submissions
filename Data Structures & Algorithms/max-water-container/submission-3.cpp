class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater=0;
        int lp=0;
        int rp=n-1;
        int width,currWater,ht;
        while(lp<rp){
            width=rp-lp;
            ht=min(height[lp],height[rp]);
         currWater=width*ht;
            maxWater=max(currWater,maxWater);
            if(height[lp]<height[rp]){
                lp++;
            }
  
else {
    rp--;
}
        }
          return maxWater;
    } 
};

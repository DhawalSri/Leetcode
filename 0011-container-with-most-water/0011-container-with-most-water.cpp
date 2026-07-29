class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size()-1;
        int maxwater = 0;

        while(lp<rp){
            int width = rp-lp;
            int currWater = width*min(height[lp], height[rp]);
            maxwater = max(currWater, maxwater);

            if(height[rp]<height[lp]){
                rp--;
            }
            else{
                lp++;
            }
        }
        return maxwater;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0, rp = n-1;
        int maxWater = 0;

        while(lp<rp){
            int width = rp-lp;
            int heights = min(height[lp], height[rp]);
            int currWater = width*heights;

            maxWater = max(maxWater, currWater);

            height[lp]<height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};
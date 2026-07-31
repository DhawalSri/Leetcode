class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int result = nums[0]+nums[1]+nums[2];

        for(int i=0; i<n; i++){
            int j = i+1;
            int k = n-1;

            while(j<k){
                int currSum = nums[i]+nums[j]+nums[k];
                if(abs(target-currSum)<abs(target-result)){
                    result = currSum;
                }
                if(currSum==target){
                    return currSum;
                }
                else if(currSum<target){
                    j++;
                }
                else{
                    k--;
                }

                

            }
            
        }
        return result;
        
    }
};
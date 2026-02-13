class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int counter = 1;
        int longest = 1;
        int n = nums.size();
        if(n==0){
            return 0;
        }

        sort(nums.begin(), nums.end());

        for(int i=0; i<n-1; i++){
           
            if(nums[i+1] == nums[i]+1){
                counter++;
            }
            else if(nums[i+1] == nums[i]){
                continue;
            }
            else{
                longest = max(longest, counter);
                counter = 1;
            } 
            
        }
        return max(longest, counter);
    }
};
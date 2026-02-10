class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        vector<pair<int, int>> freqArray;
        for(auto const& [num, freq] : counts){
            freqArray.push_back({freq, num});
        }

        sort(freqArray.begin(), freqArray.end(), [](const pair<int, int>& a, const pair<int, int>& b){
            return a.first > b.first;
        });

        vector<int> result;
        for(int i=0; i<k; i++){
            result.push_back(freqArray[i].second);
        }

        return result;
    }
};
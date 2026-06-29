class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Create a map to store frequency of nums
        unordered_map<int, int> counters;

        // Iterate through nums and store freq of each ele in counter
        for(int n : nums){
            counters[n]++;
        }

        // Create freq array with size input + 1
        vector<vector<int>> freq(nums.size()+1);

        // Iterate through frequency array and store elements based on their freq index
        for(auto &num : counters){
            freq[num.second].push_back(num.first);
        }

        vector<int> res;
        
        // Iterate through freq array
        for(int i=freq.size()-1;i>=0;i--){
            // Store Elements that have freq more than or equal to in res array
            for(int num: freq[i]){
                res.push_back(num);
                if(res.size()==k){
                    return res;
                }
            }
        }
        return {};
    }
};

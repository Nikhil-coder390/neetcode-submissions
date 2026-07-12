class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[i]>nums[st.top()]){
                int prevIdx = st.top();
                st.pop();
                res[prevIdx] = i-prevIdx;
            }
            st.push(i);
        }
        return res;
    }
};

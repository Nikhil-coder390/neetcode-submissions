class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        // How many days do I have to wait until a warmer temperature?
        // we use a stack to remember the indices whose answer we haven't found yet.
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

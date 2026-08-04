class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i <= n-k; i++) {
            int ele = INT_MIN;

            for(int j = i; j < i+k; j++) {
                ele = max(ele, nums[j]);
            }

            ans.push_back(ele);
        }

        return ans;
    }
};
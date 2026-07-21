class Solution {
public:
    void backtrack(int index,vector<int>& nums,vector<vector<int>> &ans,vector<int>& curr){
        ans.push_back(curr);
        for(int i=index;i<nums.size();i++){
            curr.push_back(nums[i]);
            backtrack(i+1,nums,ans,curr);
            curr.pop_back();

        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        backtrack(0,nums,ans,curr);
        return ans;
  }
};

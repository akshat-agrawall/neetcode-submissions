class Solution {
public:
    void backtrack(int index,int target,vector<int>& nums,vector<vector<int>> &ans,vector<int> &curr)
    {
        if(target == 0){
            ans.push_back(curr);
        }
        if(target<0)
        return;
        for(int i=index;i<nums.size();i++){
            curr.push_back(nums[i]);
            backtrack(i,target-nums[i],nums,ans,curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
         vector<vector<int>> ans;
         vector<int> curr;
         backtrack(0,target,nums,ans,curr);
         return ans;
    }
};

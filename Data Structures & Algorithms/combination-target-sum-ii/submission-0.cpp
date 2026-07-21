class Solution {
public:
    void backtrack(int index,int target,vector<int>& nums,vector<vector<int>> &ans,vector<int> &curr)
    {
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(target<0)
        return;
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i] == nums[i-1])
            continue;
            curr.push_back(nums[i]);
            backtrack(i+1,target-nums[i],nums,ans,curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
         vector<vector<int>> ans;
         vector<int> curr;
         backtrack(0,target,nums,ans,curr);
         return ans;
    }
};

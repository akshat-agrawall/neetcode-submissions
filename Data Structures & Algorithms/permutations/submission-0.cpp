class Solution {
public:
    void backtrack(vector<int>& nums,vector<vector<int>> &ans,vector<int> &curr,vector<bool> &vis)
    {
        if(nums.size()==curr.size()){
            ans.push_back(curr);
        }
        for(int i=0;i<nums.size();i++){
            if(vis[i])
            continue;
            vis[i] = true;
            curr.push_back(nums[i]);
            backtrack(nums,ans,curr,vis);
            curr.pop_back();
            vis[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<bool> vis(nums.size(),false);
        backtrack(nums,ans,curr,vis);
        return ans;
    }
};

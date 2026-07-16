class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
        int st=i+1,en=nums.size()-1;
        if(i > 0 && nums[i] == nums[i-1])
             continue;
        //vector<int> temp;
        while(st<en){
            
            if(-nums[i] == (nums[st] + nums[en]))
            {
                ans.push_back({nums[i], nums[st], nums[en]});
                st++;
                en--;
                while(st < en && nums[st] == nums[st-1])
                 st++;

                while(st < en && nums[en] == nums[en+1])
                  en--;
            }
            else if(-nums[i] > (nums[st] + nums[en]))
            {
                st++;
            }
            else
                en--;
        }
         
        }
        return ans;
    }
};

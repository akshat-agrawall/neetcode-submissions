class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> pos(10000,0);
        for(int i=0;i<nums.size();i++){
            if(pos[nums[i]] != -1)
            pos[nums[i]] = -1;
            else{
                return nums[i];
            }
        }
        return 0;

    }
};

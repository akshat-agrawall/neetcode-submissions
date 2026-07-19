class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {

        int row = nums.size();
        int col = nums[0].size();

        int low = 0;
        int high = row * col - 1;

        while(low <= high){
            int mid = low + (high-low)/2;

            int r = mid / col;
            int c = mid % col;

            if(nums[r][c] == target)
                return true;
            else if(nums[r][c] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return false;
    }
};
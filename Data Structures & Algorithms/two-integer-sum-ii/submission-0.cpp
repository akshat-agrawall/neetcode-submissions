class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0,en=numbers.size()-1;
        vector<int> ans;
        while(st<en){
            if(numbers[st]+numbers[en] == target){
                return {st+1,en+1};
            }
            else if(numbers[st]+numbers[en] > target){
                en--;
            }
            else
            st++;
        }
        return ans;
    }
};

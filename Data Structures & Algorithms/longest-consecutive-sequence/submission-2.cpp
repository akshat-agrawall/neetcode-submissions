class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int x : nums)
            mp[x]++;

        int ans = 0;

        for(int x : nums) {

            if(!mp.count(x - 1)) {

                int len = 1;
                int curr = x;

                while(mp.count(curr + 1)) {
                    curr++;
                    len++;
                }

                ans = max(ans, len);
            }
        }

        return ans;
    }
};
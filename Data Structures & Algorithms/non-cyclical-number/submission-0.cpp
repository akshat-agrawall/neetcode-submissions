class Solution {
public:
    int sum(int n) {
        int ans = 0;
        while (n > 0) {
            int x = n % 10;
            ans += x * x;
            n /= 10;
        }
        return ans;
    }

    bool isHappy(int n) {
        unordered_set<int> vis;

        while (n != 1) {
            n = sum(n);

            if (vis.find(n) != vis.end())
                return false;

            vis.insert(n);
        }

        return true;
    }
};
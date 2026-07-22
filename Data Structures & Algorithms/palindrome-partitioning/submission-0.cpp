class Solution {
public:
    bool isPal(string &s, int left, int right) {
        while (left < right) {
            if (s[left++] != s[right--])
                return false;
        }
        return true;
    }

    void backtrack(int start, vector<vector<string>> &ans,
                   vector<string> &curr, string &s) {

        if (start == s.length()) {
            ans.push_back(curr);
            return;
        }

        for (int end = start; end < s.size(); end++) {

            if (isPal(s, start, end)) {

                curr.push_back(s.substr(start, end - start + 1));

                backtrack(end + 1, ans, curr, s);

                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans;
        vector<string> curr;

        backtrack(0, ans, curr, s);

        return ans;
    }
};
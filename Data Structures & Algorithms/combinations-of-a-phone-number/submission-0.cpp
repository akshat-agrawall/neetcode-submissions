class Solution {
public:
    vector<string> phoneMap = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(int idx, string &digits, string &curr, vector<string> &ans) {

        if (idx == digits.length()) {
            ans.push_back(curr);
            return;
        }

        string letters = phoneMap[digits[idx] - '0'];

        for (char c : letters) {
            curr.push_back(c);

            backtrack(idx + 1, digits, curr, ans);

            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        if (digits.empty())
            return {};

        vector<string> ans;
        string curr;

        backtrack(0, digits, curr, ans);

        return ans;
    }
};
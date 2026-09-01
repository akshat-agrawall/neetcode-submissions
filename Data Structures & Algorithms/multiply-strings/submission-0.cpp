class Solution {
public:
    string multiply(string num1, string num2) {

        if (num1 == "0" || num2 == "0")
            return "0";

        int n = num1.length();
        int m = num2.length();

        vector<int> result(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {

            for (int j = m - 1; j >= 0; j--) {

                int d1 = num1[i] - '0';
                int d2 = num2[j] - '0';

                int product = d1 * d2;

                int pos1 = i + j;
                int pos2 = i + j + 1;

                int sum = product + result[pos2];

                result[pos2] = sum % 10;
                result[pos1] += sum / 10;
            }
        }

        string ans = "";

        int i = 0;

        // Skip leading zeros
        while (i < result.size() && result[i] == 0)
            i++;

        while (i < result.size()) {
            ans += char(result[i] + '0');
            i++;
        }

        return ans;
    }
};
class Solution {
public:

    string encode(vector<string>& strs) {
        string ans="";
        for(string str : strs){
            ans += to_string(str.length())+"#"+str;
        }
        return ans;
    }

    vector<string> decode(string s) {
         vector<string> ans;
        int i = 0;

        while (i < s.size()) {
            int j = i;

            // Find the '#'
            while (s[j] != '#')
                j++;

            // Length of the string
            int len = stoi(s.substr(i, j - i));

            // Move to first character of the string
            j++;

            // Extract the string
            ans.push_back(s.substr(j, len));

            // Move to next encoded string
            i = j + len;
        }

        return ans;
    }
};

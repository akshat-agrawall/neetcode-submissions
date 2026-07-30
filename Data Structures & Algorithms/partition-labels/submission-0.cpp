class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> occ(26);
        for (int i = 0; i < s.size(); i++)
            occ[s[i]-'a'] = i;
            int start=0,end=0;
            vector<int> ans;
        for (int i = 0; i < s.size(); i++){
            //start = i;
            end = max(end,occ[s[i]-'a']);
              if (i == end) {
                ans.push_back(end - start + 1);
                start = i + 1;
            }

        }
        return ans;
    }
};

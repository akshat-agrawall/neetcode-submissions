class Solution {
public:
    void backtrack(int start, int end, vector<string> &ans,string &curr,int n)
    {
        if(start==n && end == n){
            ans.push_back(curr);
            return;
        }
        if(start<n){
            curr.push_back('(');
            backtrack(start+1,end,ans,curr,n);
            curr.pop_back();
        }
         if(end<start){
            curr.push_back(')');
            backtrack(start,end+1,ans,curr,n);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string curr;
        backtrack(0,0,ans,curr,n);
        return ans;
    }
};

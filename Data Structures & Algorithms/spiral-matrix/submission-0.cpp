class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int> ans;
       int  row = matrix.size();
         int col = matrix[0].size();
        int sr=0,sc=0,er=row-1,ec=col-1;
        int num = row*col;
        int count =0;
        while(count<num)
        {
            for(int i=sc ;i<=ec && count<num;i++)
            {
                ans.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
             for(int i=sr ;i<=er && count<num;i++)
            {
                ans.push_back(matrix[i][ec]);
                count++;
            }
            ec--;;
             for(int i=ec ;i>=sc  && count<num;i--)
            {
                ans.push_back(matrix[er][i]);
                count++;
            }
            er--;
             for(int i=er ;i>=sr  && count<num;i--)
            {
                ans.push_back(matrix[i][sc]);
                count++;
            }
            sc++;

        }
        return  ans;
    }
};
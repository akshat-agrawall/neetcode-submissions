class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n=board[0].size();
        int arr[26]={0};
        
        for(int i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j=0;j<n;j++){
               // unordered_map<char,int> mp;
                mp[board[i][j]]++;
                if(mp[board[i][j]] >1 && board[i][j] != '.')
                return false;        
            }
        }
         for(int i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j=0;j<n;j++){
                
                mp[board[j][i]]++;
                if(mp[board[j][i]] >1 && board[j][i] != '.')
                return false;        
            }
        }
         for(int i=0;i<n;i=i+3){
            for(int j=0;j<n;j=j+3){
                unordered_map<char,int> mp;
                for(int row=i;row<i+3;row++){
                    for(int col=j;col<j+3;col++){
                mp[board[row][col]]++;
                if(mp[board[row][col]] >1 && board[row][col] != '.')
                return false; 
                    }
                }
                       
            }
        }
        return true;
    }
};

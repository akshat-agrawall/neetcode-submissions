class Solution {
    bool backtrack(vector<vector<char>>& board, string &word, int row,int col,int idx){
         if(idx==word.length())
         return true;
          if (row < 0 || row >= board.size() ||
            col < 0 || col >= board[0].size() ||
            board[row][col] != word[idx]) 
            return false;
            char temp = board[row][col];
            board[row][col] = '#';
             bool found = backtrack(board, word, row+1, col, idx+1) ||
                     backtrack(board, word, row-1, col, idx+1) ||
                     backtrack(board, word, row, col+1, idx+1) ||
                     backtrack(board, word, row, col-1, idx+1);
        
        board[row][col] = temp;       // RESTORE (unchoose / backtrack)
        return found;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size(),n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(backtrack(board,word,i,j,0))
                return true;
            }
        }
        return false;
    }
};

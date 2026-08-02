class Solution {
    int INF = 2147483647;

public:
    void islandsAndTreasure(vector<vector<int>>& grid) {

        queue<pair<int,int>> q;

        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==0)
                    q.push({i,j});
            }
        }

        int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

        while(!q.empty())
        {
            auto [r,c]=q.front();
            q.pop();

            for(int k=0;k<4;k++)
            {
                int nr=r+dir[k][0];
                int nc=c+dir[k][1];

                if(nr>=0 && nr<grid.size() &&
                   nc>=0 && nc<grid[0].size() &&
                   grid[nr][nc]==INF)
                {
                    grid[nr][nc]=grid[r][c]+1;
                    q.push({nr,nc});
                }
            }
        }
    }
};
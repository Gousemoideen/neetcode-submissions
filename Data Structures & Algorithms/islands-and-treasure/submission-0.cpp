class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int>,int>> q;

        vector<vector<int>> vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(!vis[i][j] && grid[i][j]==0) {
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }

        int delRow[] = {-1,0,+1,0};
        int delCol[] = {0,-1,0,+1};

        while(!q.empty()) {
            int r = q.front().first.first;
            int c = q.front().first.second;
            int sz = q.front().second;

            q.pop();
            for(int i=0;i<4;i++) {
                int nr = r+delRow[i];
                int nc = c+delCol[i];

                if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size()
                && !vis[nr][nc] && grid[nr][nc]!=-1 && grid[nr][nc]!=0) {
                    q.push({{nr,nc},sz+1});
                    grid[nr][nc]=sz+1;
                    vis[nr][nc]=1;
                }
            }
        }

        
    }
};

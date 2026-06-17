class Solution {
public:

    int dfs(int i,int j,vector<vector<int>>& vis,vector<vector<int>>& grid) {
        vis[i][j]=1;
        int area = 1;
        

        int delRow[] = {-1,0,+1,0};
        int delCol[] = {0,-1,0,+1};

        for(int r=0;r<4;r++) {
            int nr = i+delRow[r];
            int nc = j+delCol[r];
        
        
            if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() && !vis[nr][nc] && grid[nr][nc]==1) {
                
                area+=dfs(nr,nc,vis,grid);
            }
        }

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        int m = grid[0].size();


        vector<vector<int>> vis(n, vector<int>(m,0));

        int count = 0,maxi =1,area=1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(!vis[i][j] && grid[i][j]==1) {
                    int area = dfs(i,j,vis,grid);
                    maxi = max(maxi, area);
                    count++;
                }
            }
        }

        if(count>0) return maxi;
        return 0;
    }
};

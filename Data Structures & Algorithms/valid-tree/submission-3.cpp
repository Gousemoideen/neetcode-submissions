class Solution {
public:

    bool dfs(int node,int parent,vector<bool>& vis,vector<vector<int>>& adj) {
        vis[node]=true;

        for(auto it : adj[node]) {
            if(!vis[it]) {
                if(dfs(it,node,vis,adj)) return true;
            }
            else {
                
                    if(parent!=it) return true;
                }


            

            
        }

        return false;
    }

    bool validTree(int n, vector<vector<int>>& edges) {

        vector<vector<int>> adj(n);

        for(int i=0;i<edges.size();i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        vector<bool> vis(n, false);

        if(dfs(0,-1,vis,adj)) return false;

        for(int i=0;i<n;i++) {
            if(!vis[i]) {
                return false;
            }
        }

        return true;
    }
};

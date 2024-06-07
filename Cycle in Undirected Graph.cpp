bool dfs(int node,vector<int> adj[],int par,vector<int>&vis)
{
         int n = node;
         vis[n]=1;
         for(auto it : adj[n]){
            if(vis[it] and it == par)continue;
            if(vis[it])return true;
            if(dfs(it,adj,n,vis))return true; 
         }         
         return false;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    vector <int> g[A+1];
            for(auto it : B){
                if(it[0]==it[1])continue;
                g[it[0]].push_back(it[1]);
                g[it[1]].push_back(it[0]);
            }
            vector <int> vis(A+1,0);
            for(int i = 0;i<=A;i++){
                if(vis[i])continue;
                if(dfs(i,g,-1,vis))return true;
            }
            return false;
}

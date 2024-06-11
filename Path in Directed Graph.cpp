bool dfs(int start, vector<int> adj[], int vis[], int V){
    vis[start] = 1;
    for(auto it: adj[start]){
        if(vis[it]==0){
            if(it==V){
                return true;
            }
            else{
                vis[it] = 1;
                if(dfs(it, adj, vis, V)==true)
                return true;
            }
        }
    }
    return false;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> adj[A+1];
    int vis[A+1] = {0}; 
    for(auto it: B){
        adj[it[0]].push_back(it[1]);
    }   
    if(dfs(1,adj, vis, A))  return 1;
    return 0;
}

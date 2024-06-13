const int N = 1e5 + 10;
int vis[N];
vector<int>adj[N];
int isCycle;

void dfs(int v){
    if(isCycle) return;
    vis[v] = 1;
    for(auto u : adj[v]){
        if(vis[u] == 1){
            isCycle = 1;
            return;
        }
        if(!vis[u]){
            dfs(u);
        }
    }
    vis[v] = 2;
}

int Solution::solve(int n, vector<vector<int> > &b) {
    isCycle = 0;
    for(int i = 0; i < n; ++i){
        adj[i].clear();
        vis[i] = 0;
    }    
    for(auto v : b){
        adj[v[0]-1].push_back(v[1]-1);
    }
    for(int i = 0; i < n; ++i){
        if(!vis[i]){

            dfs(i);

        }
        if(isCycle) break;

    }
    return isCycle;
}

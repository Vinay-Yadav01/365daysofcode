vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    map<int, vector<int>> mp;
    for(int i = 0; i < A.size(); i++) {
        if(mp.count(A[i]) == 0)
        mp[A[i]].push_back(1);
    }    
   
    for(int i = 0; i < B.size(); i++) {
        if(mp.count(B[i]) == 0 || (mp[B[i]].back() != 2))
        mp[B[i]].push_back(2);
    }  
   
    for(int i = 0; i < C.size(); i++) {
        if(mp.count(C[i]) == 0 || (mp[C[i]].back() != 3))
        mp[C[i]].push_back(3);
    }  
   
    vector<int>ans;
   
    for(auto it : mp) {
        if(it.second.size() >= 2) ans.push_back(it.first);
    }
    return ans;
}

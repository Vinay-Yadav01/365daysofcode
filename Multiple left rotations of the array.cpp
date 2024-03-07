vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {
    vector<vector<int>> ans;
    int n = B.size();
    for(int j = 0; j<n;j++){
        int shift = B[j],m = A.size();
        vector<int> temp;
        for(int i=0; i<m; i++){
            temp.push_back(A[(i+shift)%m]);
        }
        ans.push_back(temp);
    }
    return ans;
}

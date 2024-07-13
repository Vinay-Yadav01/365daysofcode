void solve(int i , vector<vector<int>> &ans,vector<int> temp,vector<int> &A){
    if(i>=A.size()){
        ans.push_back(temp);
        return;
    }
    int j = i;
    while(j<=A.size()-2 && A[j]==A[j+1]) j++ ;
    solve(j+1,ans,temp,A); // dont take
    while(i<=j){ // to avoid the duplicate subsets
        temp.push_back(A[i]);
        solve(j+1,ans,temp,A);
        i++;
    }
}


vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    int n = A.size();
    vector<vector<int>> ans;
    vector<int> temp;
    sort(A.begin(),A.end());
    solve(0,ans,temp,A);
    sort(ans.begin(),ans.end());
   
    return ans;
}

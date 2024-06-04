int Solution::solve(vector<int> &A) {
    unordered_map<int,int> no;
    int mini=INT_MAX;
    for(int i=0;i<A.size();i++){
        if(no[A[i]] == 0){
            no[A[i]] = i+1;
        }else{
            mini = min(no[A[i]]-1,mini);
        }
    }
    return mini == INT_MAX ? -1 : A[mini];
}

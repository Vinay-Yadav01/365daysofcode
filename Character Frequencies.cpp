vector<int> Solution::solve(string A) {
    vector<int> v(26,0);
    vector<int> ans;
    for(auto i:A){
        v[i-'a']++;
    }
    for(int i=0;i<A.size();i++){
        if(v[A[i]-'a']!=0) {
            ans.push_back(v[A[i]-'a']);
            v[A[i]-'a']=0;
        }
    }
    return ans;
}

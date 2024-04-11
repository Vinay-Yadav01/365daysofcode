int Solution::solve(vector<int> &A) {
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++){
        mp[A[i]]++;
    }
    int count=0;
    for(auto x:mp){
     count=count+x.second/2;
    }
    return count;
}

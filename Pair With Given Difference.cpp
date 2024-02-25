int Solution::solve(vector<int> &A, int B) {
    map<int,int>m;
    for(auto it:A){
        m[it]++;
    }
    if(B==0){
        return A.size()==m.size()?0:1;
    }
    for(auto it:A){
        if(m.count(B+it))return 1;
    }
    return 0;
}

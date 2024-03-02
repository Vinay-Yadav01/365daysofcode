int Solution::solve(string A) {
    int n = A.size();
    vector<int> v(26, 0);
    for(int i=0;i<n;i++) {
        v[A[i]-'a']^=1;
    }
    return (count(v.begin(), v.end(), 1)<=1);
}

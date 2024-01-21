int Solution::titleToNumber(string A) {
    int n = A.size();  int ans = 0;
    for(int i=0;i<A.size();i++){
        ans+=((A[i]-'A'+1)*pow(26, n-i-1));
    }
    return ans;
}

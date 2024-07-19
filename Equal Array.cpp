int Solution::solve(vector<int> &A) {
    int n = A.size();
    int arr[32] = {0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= 30; j++){
            if(A[i] & (1 << j))
                arr[j]++;
        }
    }
    int ans = 0;
    for(int i = 0; i <= 30; i++){
        ans += min(arr[i], n - arr[i]);
    }
    return ans;
}

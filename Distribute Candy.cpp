int Solution::candy(vector<int> &A) {
    int n = A.size();
    vector<int> left(n, 1), right(n, 1);
    for(int i=1; i<A.size(); i++)
        if(A[i]>A[i-1])
            left[i]=left[i-1]+1;
   
    for(int i=A.size()-2; i>=0; i--)
        if(A[i]>A[i+1])
            right[i]=right[i+1]+1;
   
    int ans = 0;
    for(int i=0; i<A.size(); i++)
        ans += max(left[i], right[i]);
           
    return ans;
}

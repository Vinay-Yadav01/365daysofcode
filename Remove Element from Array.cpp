int Solution::removeElement(vector<int> &A, int B) {
    int n=A.size();
    int i=0,j=0,ans=0;
    while(j<n){
        if(A[j]==B) j++;
        else{
            swap(A[i++],A[j++]);
            ans++;
        }
    }
    return ans;
}

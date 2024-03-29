int Solution::sqrt(int A) {
    if(A==0) return 0;
    if(A==1) return 1;
    long long int ans=0,s=0,e=A;
    long long int mid= (s+e)/2;
    while(s<=e){
        if(mid*mid==A)  return mid;
        if(mid*mid<=A) {
            ans=mid;
            s=mid+1;
        }
        else e=mid-1; 
        mid = (s+e)/2;
    }
    return ans;
}

int Solution::numSetBits(unsigned int A) {
    int ans=0;
    while(A!=0){
        if(A&1) ans++;
        A/=2;
    }
    return ans;
}

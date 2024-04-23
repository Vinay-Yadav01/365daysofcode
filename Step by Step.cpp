int Solution::solve(int A) {
    if(A<0) A=-A;
    if(A==0) return 0;
    long check = sqrt(1+8*A);
    if(check*check == (1+8*A)) return (sqrt(1+8*A)-1)/2;
    else {
        int a = check/2;
        for(int i=a;i<10000;i++){
            long long val = (i*(i+1))/2;
            long long b = val-A;
            if(b%2==0 && b>0) return i;
        }
    }
}


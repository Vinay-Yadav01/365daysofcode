int Solution::pow(int x, int n, int d) {
    bool b = false;
    if(x == 0 || d == 1) return 0;
    if(x == 1|| n == 0) return 1;
    if(x < 0 && (n%2 == 1)) b = true;
    long long int res = 1;
    long long int y = x;
    while(n) {
        if(n%2) res = (res*y)%d;
        y = (y*y)%d;
        n = n/2;
    }
    if(b) return (d+res);
    return res;
}

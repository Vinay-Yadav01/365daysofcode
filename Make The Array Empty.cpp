int lcm(int a, int b){
    return (a / __gcd(a,b))*b;
}

int fun(vector<int>& A){
    int n=A.size();
    if (n==2) return lcm(A[0],A[1]);
    
    int f = A[0];
    int m = A[n/2];
    int l = A[n-1];
    
    int fm = lcm(f,m);
    int ml = lcm(m,l);
    int fl = lcm(f,l);
    
    // first and last
    A.erase(A.begin());
    A.pop_back();
    int c1 = fl + fun(A);
    A.insert(A.begin(),f);
    A.push_back(l);
    
    // first and middle
    A.erase(A.begin()+(n/2));
    A.erase(A.begin());
    int c2 = fm + fun(A);
    A.insert(A.begin(),f);
    A.insert(A.begin()+(n/2),m);
    
    // middle and last
    A.erase(A.begin()+(n/2));
    A.pop_back();
    int c3 = ml + fun(A);
    A.insert(A.begin()+(n/2),m);
    A.push_back(l);
    
    return max(c1,max(c2,c3));
    
}

int Solution::solve(vector<int> &A) {
    return fun(A);
}

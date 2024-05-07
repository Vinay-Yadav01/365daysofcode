int Solution::solve(string A, string B) {
    string b2=B.substr(B.size()-2);
    int b=stoi(b2);
    int x=A[A.size()-1]-'0';
    long ans=(long)pow(x,(b%4+4));
    return (int)ans%10;
}

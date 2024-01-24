string Solution::findDigitsInBinary(int A) {
    string ans = "";
    if(A==0) return "0";
    while(A){
        int bit = A%2;
        ans+=to_string(bit);
        A/=2;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

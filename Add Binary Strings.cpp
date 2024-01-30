string Solution::addBinary(string A, string B) {
    int n=A.length(),m=B.length();
    int carry=0;
    string ans="";
    int i=n-1,j=m-1;
    while(i>=0 || j>=0 || carry!=0){
        int sum=0;
        if(i>=0){
            sum+=(A[i]-'0');
            i--;
        }
        if(j>=0){
            sum+=(B[j]-'0');
            j--;
        }
        sum+=carry;
        ans=to_string(sum%2)+ans;
        carry=sum/2;
    }
    return ans;
}

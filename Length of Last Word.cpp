int Solution::lengthOfLastWord(const string A) {
    int len=0;
    int n=A.length();
    int k=n-1;
    while(k>=0 && A[k]==' ' ){
       k--;
    }
    for(int i=0; i<=k; i++){
        if(A[i]>=65 && A[i]<=90){
           len++;
        }
        else if(A[i]>=97 && A[i]<=122){
            len++;
        }
        else{
           len=0;
        }
    }
    return len;
}

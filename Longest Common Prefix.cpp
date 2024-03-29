int checkstr(string str1, string str2){
    int ans=0;
    int i=0,j=0;
    while(i<str1.size() && j<str2.size() && str1[i++]==str2[j++])  ans++;
    return ans;
}

string Solution::longestCommonPrefix(vector<string> &A) {
    string str=A[0];
    int max_length=str.size();
    for(int i=1;i<A.size();i++){
        int temp = checkstr(str,A[i]);
        max_length = min(max_length,temp);
    }
    return str.substr(0,max_length);
}

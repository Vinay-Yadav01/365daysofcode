string Solution::convertToTitle(int A) {
    string ans = "";
    while(A){
        char element = A%26+64;
        if(A%26==0) ans+='Z';
        else ans.push_back(element);
        A=(A-1)/26;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

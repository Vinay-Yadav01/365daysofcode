int Solution::isPalindrome(string A) {
    vector<char>ch;
    for(char c: A){
        if(isalnum(c))
        ch.push_back(tolower(c));
    }
    int s=0,e=ch.size()-1;
    while(s<e){
        if(ch[s++]!=ch[e--]) return 0;
    }
    return 1;
}

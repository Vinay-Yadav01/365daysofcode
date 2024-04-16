int Solution::solve(string A) {
    const int mod = 1e9+7;
    long long vowel =0, conso=0;
    for(auto i:A){
        if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u') vowel++;
        else conso++;
    }
    return (vowel*conso)%mod;
}


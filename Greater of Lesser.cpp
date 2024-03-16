int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int maxi=0,mini=0;
    for(auto i:A){
        if(i>C) maxi++;
    }
    for(int i:B){
        if(i<C) mini++;
    }
    return max(mini,maxi);
}


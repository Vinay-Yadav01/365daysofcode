vector<int> Solution::solve(vector<int> &A) {
    int pos=0,neg=0;
    for(auto i:A){
        if(i>0) pos++;
        else if(i<0) neg++;
    }
    vector<int> ans;
    ans.push_back(pos);
    ans.push_back(neg);
    return ans;
}

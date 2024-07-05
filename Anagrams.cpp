vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    int n=A.size();
    vector<vector<int>> v;
    map<string,vector<int>> m;
    for(int i=0; i<n; i++){
        string x=A[i];
        sort(x.begin(),x.end());
        m[x].push_back(i+1);
    }
    for(auto i=m.begin(); i!=m.end(); i++){
        v.push_back(i->second);
    }
    return v;
}

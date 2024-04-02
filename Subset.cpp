void subset(vector<int> A,int index,int size, vector<int> temp,vector<vector<int> >& ans){
    if(index==size){
        sort(temp.begin(),temp.end());
        ans.push_back(temp);
        return;
    }
    subset(A,index+1,size,temp,ans);
    temp.push_back(A[index]);
    subset(A,index+1,size,temp,ans);
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<int> temp;
    vector<vector<int> > ans;
    int index = 0;
    int size = A.size();
    subset(A,index,size,temp,ans);
    sort(ans.begin(),ans.end());    return ans;
}

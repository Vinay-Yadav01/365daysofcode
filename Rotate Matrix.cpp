void Solution::rotate(vector<vector<int> > &A) {
    //Transpose of Matrix
    for(int i=0;i<A.size();i++){
        for(int j=0;j<i;j++){
            swap(A[i][j],A[j][i]);
        }
    }
    //Reverse each element of Every Row
    for(int i=0;i<A.size();i++){
        reverse(A[i].begin(),A[i].end());
    }
}

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int row=0,col=A[0].size()-1;
    while(row<A.size() and col>=0){
        if(A[row][col]==B) return 1;
        else if(A[row][col]<B)  row++;
        else col--;
    }
    return 0;
}

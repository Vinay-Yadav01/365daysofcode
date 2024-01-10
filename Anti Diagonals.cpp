vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > ans;
    int rowStart= 0, colStart= 0;
    while(rowStart < A.size()) {
        int row= rowStart;
        int col= colStart;  
        vector<int> temp;
        while(row < A.size() and col >=0) {
            temp.push_back(A[row][col]);
            row++; col--;
        }
        ans.push_back(temp);
        if(colStart ==A.size()-1 ) {
            rowStart++;
        } else {
            colStart++;
        }
    }
    return ans;
}

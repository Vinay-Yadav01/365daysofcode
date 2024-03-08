vector<vector<int> > Solution::solve(vector<int> &A, int B, int C) {
    int left = 0, right = C -1, top = 0, bottom = B -1;
    vector<vector<int>> ans(B, vector<int>(C));
    int ind = 0;  
    while(left<=right and top<=bottom) {
       
        for(int i = left; i <= right; i++){
            ans[top][i] =  A[ind++];
        }
        top++;
   
        for(int i = top; i<=bottom; i++){
            ans[i][right] = A[ind++];
        }
        right--;
   
        if(top<=bottom){
            for(int i = right; i >= left; i--){
                ans[bottom][i] =  A[ind++];
            }
            bottom--;
        }
       
        if(left<=right){
            for(int i = bottom; i >= top; i--){
                ans[i][left] =  A[ind++];
            }
            left++;
        }      
    }
    return ans;
}

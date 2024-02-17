int Solution::removeDuplicates(vector<int> &A) {
    if(A.size() == 1)
        return 1;
    int start = 0, end = 1;
    while(end < A.size()){
        if(A[start] != A[end]){
            start++;
            A[start] = A[end];
        }
        end++;
    }
    A.resize(start + 1);
    return A.size();
}

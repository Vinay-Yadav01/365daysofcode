void Solution::sortColors(vector<int> &A) {
    int left = 0;
    int right = A.size()-1;
    int mid = 0;

    while(mid<=right){
        if(A[mid] == 0){
            swap(A[left],A[mid]);
            left++;
            mid++;
        }else if(A[mid] == 1){
            mid++;
        }else if(A[mid] == 2){
            swap(A[mid],A[right]);
            right--;
        }
    }
}

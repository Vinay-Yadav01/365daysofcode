int Solution::findMin(const vector<int> &A) {
    int s=0,e=A.size()-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(A[mid]>=A[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    int pivot=s;
    if(pivot==A.size()-1)   return A[0];
    return A[pivot];
}

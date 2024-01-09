int getPivot(const vector<int> &A,int n){
    int s=0,e=n-1;
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
    return s;
} 

int binarySearch(const vector<int> &A,int s,int e,int target){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(A[mid]==target){
            return mid;
        }
        else if(A[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int pivot  = getPivot(A,n);
    if(B>=A[pivot]&&B<=A[n-1]){
        return binarySearch(A,pivot,n-1,B);
    }
    else{
        return binarySearch(A,0,pivot-1,B);
    }
}

int firstOccuernces(const vector<int> &A, int B) {
    int n = A.size(), l = 0,h = n-1,ans = -1;
    while(l<=h) {
        int mid  = l + (h-l)/2;
        if (A[mid] == B) {
            ans = mid;
            h = mid - 1;
        } else if(A[mid] > B) {
            h  = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}

int lastOccuernces(const vector<int> &A, int B) {
    int n = A.size();
    int l = 0;
    int h = n-1;
    int ans = -1;
    while(l<=h) {
        int mid  = l + (h-l)/2;
        if (A[mid] == B) {
            ans = mid;
            l = mid + 1;
        } else if(A[mid] > B) {
            h  = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return ans;
}



int Solution::findCount(const vector<int> &A, int B) {
    if(A.size() == 0) return 0;
    int firstOccuerncesIdx = firstOccuernces(A, B);
    if(firstOccuerncesIdx == -1) return 0;
    int lastOccuerncesIdx = lastOccuernces(A, B);
    return lastOccuerncesIdx - firstOccuerncesIdx + 1;
}

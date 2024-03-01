int inversions(vector<int> &arr, int l, int h){
    if(h<=l) return 0;
    int mid = (l+h)/2;

    int ans = inversions(arr, l, mid) + inversions(arr, mid+1, h);

    vector<int> arr1; for(int i=l;i<=mid;++i) arr1.push_back(arr[i]);
    vector<int> arr2; for(int i=mid+1;i<=h;++i) arr2.push_back(arr[i]);

    int x=l, i1=0, i2=0;
    while(i1<arr1.size() && i2<arr2.size()){
        if(arr1[i1]<=arr2[i2]) {arr[x++] = arr1[i1++];}
        else {ans+= arr1.size()-i1; arr[x++] = arr2[i2++];}
    }

    while(i1<arr1.size()) arr[x++] = arr1[i1++];
    while(i2<arr2.size()) arr[x++] = arr2[i2++];

    return ans;
}

int Solution::countInversions(vector<int> &A) {
    return inversions(A, 0, A.size()-1);
}

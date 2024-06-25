vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    int i = 1;
    while(i < A.size()){
        if(i%2 == 1) swap(A.at(i-1),A.at(i));
        i += 2;
    }
    return A;
}

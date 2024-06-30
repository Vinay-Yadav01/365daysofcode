vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int n = A.size();
    deque<int> dq;
    vector<int> ans;
   
    for(int i = 0; i < B; i++){
        while(!dq.empty() && A[i] > dq.back()){
            dq.pop_back();
        }
        if(dq.empty() || A[i] <= dq.back()){
            dq.push_back(A[i]);
        }
    }
    ans.push_back(dq.front());
   
    for(int i = B; i < n; i++){
        if(dq.front() == A[i-B]){
            dq.pop_front();
        }
        while(!dq.empty() && A[i] > dq.back()){
            dq.pop_back();
        }
        if(dq.empty() || A[i] <= dq.back()){
            dq.push_back(A[i]);
        }
        ans.push_back(dq.front());
    }
    return ans;
}

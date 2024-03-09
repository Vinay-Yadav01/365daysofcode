vector<int> Solution::solve(vector<int> &A) {
    priority_queue<int,vector<int>,greater<int>>minHeap;
    for(int i=0;i<A.size();i++){
        A[i]=A[i]*A[i];
        minHeap.push(A[i]);
    }
    int index=0;
    while(!minHeap.empty()){
        A[index++]=minHeap.top();
        minHeap.pop();
    }
    return A;
}

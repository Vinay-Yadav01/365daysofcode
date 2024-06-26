int Solution::maxProfit(const vector<int> &A) {
    if(A.size()==0) return 0;
    int mini = A[0];
    int profit=0;
    for(int i=1;i<A.size();i++){
        profit = max(profit,A[i]-mini);
        mini = min(mini, A[i]);
    }
    return profit;
}

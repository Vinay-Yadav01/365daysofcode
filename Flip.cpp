vector<int> Solution::flip(string A) {
    int one_count = 0;
    int zero_count =0;
    int n = A.length();
    int left = 0;
    int right = 0;
    vector<int>ans(2,-1);
    int maxDiff = 0;
    while(right<n && left<n){
        if(A[right]=='0')zero_count++;
        if(A[right]=='1')one_count++;
        while(one_count>zero_count)
        {
            if(A[left]=='0')zero_count--;
            if(A[left]=='1')one_count--;
            left++;
        }
        int diff = zero_count-one_count;
        if(diff>maxDiff)
        {
            maxDiff = diff;
            ans[0] = left+1;
            ans[1] = right+1;
        }
    
        right++;
    }

    if(ans[0]==-1 || ans[1]==-1)
    {
        return {};
    }
    return ans;
}

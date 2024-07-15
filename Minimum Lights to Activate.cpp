int Solution::solve(vector<int> &A, int B) {
    size_t n= A.size();
    vector<pair<int, int>> lights;
    for(int i= 0; i< n; i++)
        if(A[i]== 1)
            lights.push_back({i-B+1, i+B-1});
    int beg= -1, end= -1;
    for(int i= 0; i< lights.size(); i++) {
        if(lights[i].first <= 0) beg= i;
        if(lights[lights.size()-1-i].second >= n-1) end= lights.size()-1-i;
    }
    if(beg== -1 or end== -1) return -1;
    if(beg== end) return 1;
    int count= 1;
    for(int i= beg; i<= end; i++) {
        if(i== end) {
            ++count;
            break;
        }
        bool found= false;
        for(int j= i+1; j<= end; j++) {
            if(lights[j].first >= lights[i].second) {
                if(lights[j].first- lights[j-1].second > 1) {
                    return -1;
                }
                found= true;
                ++count;
                i= j-1;
            }
        }
        if(!found){
            if(lights[i].second < n)
                ++count;
            break;
        }
    }
    return count;
}

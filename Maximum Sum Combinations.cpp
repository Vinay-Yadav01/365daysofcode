vector<int> Solution::solve(vector<int> &A, vector<int> &B, int C)
{
    int n=A.size();
    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), greater<int>());
    priority_queue<vector<int>> p;
    set<vector<int>> s;
    vector<int> v;
    p.push({A[0]+B[0],0,0});
    s.insert({0,0});
    while(C--)
    {
        auto top=p.top();
        p.pop();
        int i=top[1];
        int j=top[2];
        v.push_back(top[0]);
        auto f1=s.find({i+1,j});
        auto f2=s.find({i,j+1});
        if(f1==s.end() && i+1<A.size())
        {
            p.push({A[i+1]+B[j],i+1,j});
            s.insert({i+1,j});
        }
        if(f2==s.end() && j+1<B.size())
        {
            p.push({A[i]+B[j+1],i,j+1});
            s.insert({i,j+1});
        }
    }
    return v;
   
}

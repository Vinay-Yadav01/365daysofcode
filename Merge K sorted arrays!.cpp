#include<queue>

class node{
    public:
        int data;
        int row;
        int col;
        
        node(int data, int row, int col){
            this->data=data;
            this->row=row;
            this->col=col;
        }
};

class compare{
    public:
        bool operator()(node* a, node* b){
            return a->data>b->data;
        }
};

vector<int> Solution::solve(vector<vector<int> > &A) {
    int n = A.size();
    priority_queue<node*, vector<node*>, compare> pq;
    for(int i=0;i<n;i++){
        node* temp = new node(A[i][0],i,0);
        pq.push(temp);
    }
    vector<int> ans;
    while(!pq.empty()){
        node* top = pq.top();
        pq.pop();
        ans.push_back(top->data);
        int row = top->row;
        int col = top->col;
        if(col+1< A[row].size()){
            node* next = new node(A[row][col+1],row,col+1);
            pq.push(next);
        }
    }
    return ans;
}

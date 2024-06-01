/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
#include<queue> 
class compare{
     public:
        bool operator()(ListNode* a, ListNode* b){
            return a->val>b->val;
        }
 };
 
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue<ListNode*, vector<ListNode*>, compare> pq;
    //Inserting First Node of every vector
    for(int i=0;i<A.size();i++){
        if(A[i]) pq.push(A[i]);
    }   
    ListNode* head=NULL;
    ListNode* tail=NULL;
    while(!pq.empty()){
        ListNode* temp = pq.top();
        pq.pop();
        if(head==NULL){
            head=temp;
            tail=temp;
            if(tail->next) pq.push(tail->next);
        }
        else{
            tail->next=temp;
            tail=temp;
            if(tail->next) pq.push(tail->next);
        }
    }
    return head;
}

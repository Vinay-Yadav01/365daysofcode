/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if(A==NULL) return B;
    if(B==NULL) return A;
    if(A->val>B->val) swap(A,B);
    ListNode* res=A;
    while(A&&B){
        ListNode*temp=NULL;
        while(A!=NULL&&A->val<=B->val){
            temp=A;
            A=A->next;
        }
        temp->next=B;
        swap(A,B);
    }
    return res;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* prev=A,*curr=A;
    while(curr!=NULL){
        if(curr->val==0) {
            swap(curr->val,prev->val);
            prev=prev->next;
            curr=curr->next;
        }
        else if(prev->val==1) curr=curr->next;
    }
    return A;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* slow = A;
    ListNode* fast=A;
    if(A->next ==NULL) return A;
    while(slow!= NULL && slow->next != NULL ){
            fast=slow->next;
            int temp=slow->val;
            slow->val=fast->val;
            fast->val=temp;
            slow=slow->next->next;
        
    }
    return A;
}

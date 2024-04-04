/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* rec(ListNode* A)
{
    if(A==NULL || A->next == NULL) return A;
    ListNode* newhead = rec(A->next);
    A->next->next = A;
    A->next = NULL;
    return newhead;
}
 
ListNode* Solution::reverseList(ListNode* A) {
    return rec(A);    
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* curr=A;
    while(curr!=NULL && curr->next!=NULL)
    {
        while(curr!=NULL && curr->next!=NULL && curr->val==curr->next->val)
        {
            curr->next=curr->next->next;
        }
        curr=curr->next;
    } 
    return A;
}

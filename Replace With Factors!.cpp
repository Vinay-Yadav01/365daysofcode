/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A, int B) {
    ListNode *temp = A;
    while(temp!=NULL){
        temp->val=((temp->val)/B)*B;
        temp=temp->next;
    }
    return A;
}

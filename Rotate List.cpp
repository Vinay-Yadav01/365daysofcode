/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode* curr=A;
    int count=1;
    while(curr->next && ++count){
        curr=curr->next;
    }
    curr->next=A;
    B%=count;
    B=count-B;
    while(B--){
        curr = curr->next;
    }
    A=curr->next;
    curr->next=NULL;
    return A;
}

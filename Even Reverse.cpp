/**
 * Definition for singly-linked list->
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode rev(ListNode* A){
    ListNode prev = NULL, curr = A, next = NULL;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
 
ListNode* Solution::solve(ListNode* A) {
    if(A == NULL) {
        return A;
    }
    ListNode ptr1 = A;
    ListNode ptr2 = A -> next;
    ListNode evenHead = ptr2;
    while(ptr1 != NULL && ptr2 != NULL){
        ptr1->next = ptr2->next;
        ptr1 = ptr1->next;
        if(ptr1 == NULL) break;
        ptr2->next = ptr1->next;
        ptr2 = ptr2->next;
    }
    evenHead = rev(evenHead);
    ptr1 = A;
    ptr2 = evenHead;
    ListNode curr = A;
    while(ptr1 != NULL && ptr2 != NULL){
        ptr1 = ptr1->next;
        curr->next = ptr2;
        curr = curr->next;
        ptr2 = ptr2->next;
        curr->next = ptr1;
        curr = curr->next;
    }
    return A;
}

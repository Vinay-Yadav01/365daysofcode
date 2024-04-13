/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 ListNode* getMid(ListNode* head ) {
    ListNode* slow = head;
    ListNode* fast = head -> next;

    while(fast != NULL && fast-> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }

    return slow;
}

ListNode* reverse(ListNode* head) {
    ListNode* curr = head;
    ListNode* prev = NULL;
    ListNode* next = NULL;

    while(curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    
int Solution::lPalin(ListNode* A) {
    if(A -> next == NULL) {
        return 1;
    }
    
    //step 1 -> find Middle
    ListNode* middle = getMid(A);
    //cout << "Middle " << middle->val << endl;
    
    //step2 -> reverse List after Middle
    ListNode* temp = middle -> next;
    middle -> next = reverse(temp);
    
    //step3 - Compare both halves
    ListNode* head1 = A;
    ListNode* head2 = middle -> next;
    
    while(head2 != NULL) {
        if(head2->val != head1->val) {
            return 0;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    //step4 - repeat step 2
    temp = middle -> next;
    middle -> next = reverse(temp);
    return 1;
}

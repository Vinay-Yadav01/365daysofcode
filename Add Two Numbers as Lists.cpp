/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
void insertAtTail(ListNode* &head, ListNode* &tail, int digit){
    ListNode* newNode = new ListNode(digit);
    if(head==NULL){
        head=tail=newNode;
        return;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}
 
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode *temp1=A, *temp2=B;
    int carry=0;
    ListNode* ansHead=NULL, *ansTail=NULL;
    while(temp1!=NULL || temp2!=NULL || carry){
        int val1=0;
        if(temp1!=NULL) {
            val1=temp1->val;
            temp1=temp1->next;
        }
        int val2=0;
        if(temp2!=NULL) {
            val2=temp2->val;
            temp2=temp2->next;
        }
        int sum=val1+val2+carry;
        int digit=sum%10;
        carry=sum/10;
        insertAtTail(ansHead,ansTail,digit);
        
    }
    return ansHead;
}

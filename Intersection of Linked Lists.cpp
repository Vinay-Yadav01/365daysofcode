/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    ListNode* l1= A;
   ListNode* l2= B;
   
   while(l1!=l2){    
       if(l1==NULL) l1=B;
       else  l1=l1->next;
       if(l2==NULL) l2=A;
       else l2=l2->next;
   }
   if(l1!=NULL) return l1;
}

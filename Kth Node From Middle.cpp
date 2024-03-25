/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
int findLength(int count,ListNode* A)
{
    if(A==NULL)
    {
        return count;
    }
    count++;
    return findLength(count,A->next);
}
int findNode(ListNode* A,int ind)
{
    if(A==NULL||ind==0)
    {
        return -1;
    }
    if(ind==1)
    {
        return A->val;
    }
    ind--;
    return findNode(A->next,ind);
}
 
int Solution::solve(ListNode* A, int B) {
    int count=0;
    int N=findLength(count,A);
    int ind=(N/2)+1-B;
    return findNode(A,ind);
}

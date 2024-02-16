void partitionAlgo(ListNode* l, ListNode* r, ListNode*& prev, ListNode*& pivot) {
    pivot = r;
    ListNode* swpidx = l;
    ListNode* curridx = l;
    while(curridx && curridx != pivot) {
        if(curridx->val < pivot->val) {
            swap(curridx->val, swpidx->val);
            prev = swpidx;
            swpidx = swpidx->next;
        }
        curridx = curridx->next;
    }
    swap(swpidx->val, pivot->val);
    pivot  = swpidx;
}
void quicksort(ListNode* l, ListNode* r) {

ListNode* prev = NULL;

ListNode* pivot = NULL;

partitionAlgo(l, r, prev, pivot);

if(prev)

quicksort(l, prev);

if(pivot != r)

quicksort(pivot->next, r);

}

ListNode* Solution::sortList(ListNode* A) {

ListNode* end = A;

while(end->next != NULL)

end = end->next;

quicksort(A, end);

return A;

}

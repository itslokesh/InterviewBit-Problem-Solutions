/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* merge(ListNode *A,ListNode *B){
    if(A==NULL){
        return B;
    }
    if(B==NULL)
        return A;
    B->next=merge(A->next,B->next);
    A->next=B;
    return A;
}
ListNode* Solution::reorderList(ListNode* A) {
    if(A==NULL || A->next==NULL || A->next->next==NULL)
        return A;
    ListNode *slow=A;
    ListNode *fast=A;
    while(fast!=NULL){
        fast=fast->next;
        if(fast==NULL)
            break;
        slow=slow->next;
        fast=fast->next;
    }
    fast=A;
    while(fast->next!=slow)
        fast=fast->next;
    fast->next=NULL;
    ListNode *head=slow;
    ListNode *first=slow;
    ListNode *second=slow->next;
    while(first->next!=NULL){
        first->next=second->next;
        second->next=head;
        head=second;
        second=first->next;
    }
    fast=A;
    slow=head;
    A=merge(fast,slow);
    return A;
}

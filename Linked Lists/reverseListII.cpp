/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    int f=1;
    if(B==C)
        return A;
    ListNode *temp=A;
    ListNode *temp1=NULL;
    while(f<B){
        temp1=temp;
        temp=temp->next;
        f++;
    }
    ListNode *head=temp;
    ListNode *first=temp;
    ListNode *second=temp->next;
    while(f<C){
        temp=temp->next;
        f++;
    }
    ListNode *tail=temp->next;
    while(first->next!=tail){
        first->next=second->next;
        second->next=head;
        head=second;
        second=first->next;
    }
    if(temp1==NULL)
        return head;
    temp1->next=head;
    return A;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    int size=0;
    ListNode *temp=A;
    while(temp->next!=NULL){
        size++;
        temp=temp->next;
    }
    if(size==0)
        return A;
    B=B%(size+1);
    int z=B;
    if(z==0)
        return A;
    temp=A;
    ListNode *head=A;
    while(z<size){
        z++;
        temp=temp->next;
    }
    A=temp->next;
    temp->next=NULL;
    temp=A;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=head;
    return A;
}

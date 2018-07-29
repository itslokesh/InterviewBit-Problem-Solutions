/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *temp=A;
    int z=0;
    while(temp->next!=NULL && z<B){
        temp=temp->next;
        z++;
    }
    if(z<B && temp->next==NULL)
        return A->next;
    else{
        ListNode *temp1=A;
        while(temp->next!=NULL){
            temp=temp->next;
            temp1=temp1->next;
        }
        temp1->next=temp1->next->next;
        return A;
    }
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A, int B) {
    ListNode *prevLast,*currLast;
    ListNode *currHead,*nextHead;
    ListNode *first,*second;
    int i=0;
    first=A;
    ListNode *head=A;
    while(first!=NULL){
        head=first;
        i++;
        second=first->next;
        int temp=0;
        currLast=first;
        while(temp<B-1){
            currLast=currLast->next;
            temp++;
        }
        nextHead=currLast->next;
        currLast->next=NULL;
        while(first->next!=NULL){
            first->next=second->next;
            second->next=head;
            head=second;
            second=first->next;
        }
        ListNode *ha=head;
        if(i==1)
            A=head;
        else
            prevLast->next=head;
        prevLast=first;
        prevLast->next=NULL;
        first=nextHead;
    }
    return A;
}

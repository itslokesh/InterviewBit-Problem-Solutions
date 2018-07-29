/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    ListNode *tempSlow=A;
    ListNode *tempFast=A;
    int total=0;
    while(tempFast!=NULL && tempFast->next!=NULL){
        tempSlow=tempSlow->next;
        tempFast=tempFast->next->next;
        total++;
    }
    ListNode *first=tempSlow;
    ListNode *second=first->next;
    ListNode *head=first;
  //  cout<<"!@"<<endl;
    while(first->next!=NULL){
        first->next=second->next;
        second->next=head;
        head=second;
        second=first->next;
    }
//    cout<<"!:"<<endl;
    while(total>0){
        if(A->val==head->val){
            A=A->next;
            head=head->next;
            total--;
        }
        else
            return 0;
    }
    return 1;
}

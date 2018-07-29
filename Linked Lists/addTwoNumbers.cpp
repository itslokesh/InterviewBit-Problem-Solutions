/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *t1=A,*t2=B;
    ListNode* sol=new ListNode(0);
    ListNode *temp=sol;
    int carry=0;
    while(t1!=NULL && t2!=NULL){
        int sum=carry+t1->val+t2->val;
        int val=sum%10;
        carry=sum/10;
        ListNode* hel=new ListNode(val);
    //    cout<<val;
        temp->next=hel;
        temp=temp->next;
        t1=t1->next;
        t2=t2->next;
    }
    while(t1!=NULL){
        int sum=carry+t1->val;
        int val=sum%10;
        carry=sum/10;
        ListNode* hel=new ListNode(val);
    //    cout<<val;
        temp->next=hel;
        temp=temp->next;
        t1=t1->next;
    }
    while(t2!=NULL){
        int sum=carry+t2->val;
        int val=sum%10;
        carry=sum/10;
        ListNode* hel=new ListNode(val);
     //   cout<<val;
        temp->next=hel;
        temp=temp->next;
        t2=t2->next;
    }
    if(carry!=0){
        ListNode* hel=new ListNode(carry);
     //   cout<<carry;
        temp->next=hel;
    }
    return sol->next;
}


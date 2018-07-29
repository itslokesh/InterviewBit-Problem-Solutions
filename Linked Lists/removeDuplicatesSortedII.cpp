/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int del=-1;
    while(A!=NULL && A->next!=NULL && A->val==A->next->val){
        del=A->val;
        while(A!=NULL && A->val==del)
            A=A->next;
    }
    if(A==NULL)
        return A;
    ListNode *curr=A;
    while(curr!=NULL && curr->next!=NULL){
        ListNode *next=curr->next;
        del=-1;
        if(next!=NULL && next->next!=NULL && next->val==next->next->val){
            del=next->val;
            while(next!=NULL && next->val==del){
                curr->next=next->next;
                next=next->next;
            }
        }
        else
            curr=curr->next;
    }
    return A;
}

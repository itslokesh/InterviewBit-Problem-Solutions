/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode *fast=A;
    ListNode *slow=A;
    do{
        fast=fast->next;
        if(fast==NULL || fast->next==NULL)
            return NULL;
        if(slow==fast)
            break;
        slow=slow->next;
        fast=fast->next;
    }while(fast!=NULL && fast->next!=NULL && fast!=slow);
    if(fast==NULL || fast->next==NULL)
        return NULL;
    int loopLength=0;
    do{
        loopLength++;
        slow=slow->next;
    }while(slow!=fast);
    slow=A;
    fast=A;
    while(loopLength>0){
        slow=slow->next;
        loopLength--;
    }
    while(slow!=fast){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}

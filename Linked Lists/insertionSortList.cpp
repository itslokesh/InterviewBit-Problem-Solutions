ListNode* Solution::insertionSortList(ListNode* A) {
    if(A==NULL || A->next==NULL)
        return A;
    ListNode *out=NULL;
    ListNode *temp=A;
    while(temp->next!=NULL){
        ListNode *min=temp;
        ListNode *minPrev=temp;
        ListNode *smaller=temp;
        ListNode *smallerPrev=temp;
        while(smaller!=NULL){
            if(smaller->val<min->val){
                min=smaller;
                minPrev=smallerPrev;
            }
            smallerPrev=smaller;
            smaller=smaller->next;
        }
        if(out==NULL){
            if(min!=A){
                minPrev->next=min->next;
                min->next=A;
                A=min;
            }
            out=A;
        }
        else if(minPrev!=min){
            minPrev->next=min->next;
            min->next=out->next;
            out->next=min;
            out=out->next;
        }
        else{
            out=out->next;
        }
        temp=out->next;
    }    
    return A;
}

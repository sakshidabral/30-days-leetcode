/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* insertEnd(struct ListNode* head, int data){
    struct ListNode* temp=(struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
        return head;
    }
    struct ListNode* p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    return head;
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode* ans=NULL;
    struct ListNode* p=list1;
    struct ListNode* q=list2;
    while(p!=NULL && q!=NULL){
        if(p->val == q->val){
            ans=insertEnd(ans,p->val);
            ans=insertEnd(ans,p->val);
            p=p->next;
            q=q->next;
        }
        else if(p->val < q->val){
            ans=insertEnd(ans,p->val);//insert p->val in ans ll
            p=p->next;
        }
        else{
            ans=insertEnd(ans,q->val);//insert q->val in ans ll
            q=q->next;
        }
    }
    while (p != NULL) {
        ans = insertEnd(ans, p->val);
        p = p->next;
    }
    
    while (q != NULL) {
        ans = insertEnd(ans, q->val);
        q = q->next;
    }
    return ans;
}

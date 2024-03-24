/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* s=head, *f=head, *p;
    for(int i=0;i<n;i++)
    f=f->next;
    if (f == NULL) {
        p = head;
        head = head->next;
        free(p);
        return head;
    }
    while(f->next!=NULL){
        s=s->next;
        f=f->next;
    }
    p=s->next;
    s->next=s->next->next;
    p->next=NULL;
    return head;
}
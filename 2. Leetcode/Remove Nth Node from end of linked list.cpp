class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t = new ListNode(-1);
        t->next = head;
        ListNode* s = t;
        ListNode* f = t;
        
        for(int i=1;i<=n;i++){
            f=f->next;
        }
        
        while(f->next!=NULL){
            f=f->next;
            s=s->next;
        }
        s->next=s->next->next;
        return t->next;
    }
};
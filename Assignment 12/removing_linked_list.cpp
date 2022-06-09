class Solution {
public:
    ListNode* removeElements(ListNode* h, int v) {
        if (h == NULL){
            return 0;
        }
        h->next=removeElements(h->next,v);
        if(h->val==v){
            ListNode* temp = h->next;
            delete h;
            return temp;
        }
        else{
            return h;
        }
      
    }
};

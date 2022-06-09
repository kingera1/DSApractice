class Solution {
public:
    ListNode* removeElements(ListNode* h, int v) {
        if (h == NULL){
            return 0;
        }
        ListNode* temp = h->next;
        h->next=removeElements(temp,v);
        
        if(h->val==v){            
            delete h;
            return temp;
        }
        else{
            return h;
        }
      
    }
};

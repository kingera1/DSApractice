class Solution {
public:
    bool hasCycle(ListNode *h) {        
        ListNode * slow= h, *fast =h;
        
        while(fast!= NULL&&fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(fast==slow){
                return true;
            }
        }return false;
        
    }
};

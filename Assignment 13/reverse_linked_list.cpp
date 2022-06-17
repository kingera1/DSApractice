class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* forw = NULL;
        if (curr==NULL){
            return head;
        }
        while(curr !=NULL){
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr= forw;   
        }
        return prev;
    }
};

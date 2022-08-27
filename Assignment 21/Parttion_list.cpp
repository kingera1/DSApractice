class Solution {
public:
    
    ListNode* partition(ListNode* head, int x) {
        if(!head) return NULL;
        if(head->next == NULL) return head;
        ListNode* prev = NULL;
        ListNode*temp = head;
        ListNode* ptr2 =NULL;
        ListNode* ptr1;
        while(head != NULL){
            if(head->val < x){
                if(prev == NULL && ptr2) { 
                    temp = head;
                }
                
                if(ptr2 != NULL && prev != NULL){
                    prev->next = head;
                }
                prev = head;
            }
            
            else if(head->val >= x){
                
                if(ptr2 == NULL){
                    ptr2 = head;
                    ptr1 = ptr2;
                }
                else{
                    ptr2->next = head;
                    ptr2 = head;
                }
            }
            
            head = head->next;
        }
        cout<<ptr1; 
        if(ptr2) ptr2->next = NULL;
        
        if(prev) prev->next = ptr1;
       
        return temp;
    }
    
};

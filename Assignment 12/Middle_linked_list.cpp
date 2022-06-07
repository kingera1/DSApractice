class Solution {
public:
    ListNode* middleNode(ListNode* h) {
    ListNode *fast=h;
    ListNode *slow= h;
    if(h == NULL){
        return 0;
        
    }    
    else{
        while(fast&&fast->next)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
        
    } 
	
}
};

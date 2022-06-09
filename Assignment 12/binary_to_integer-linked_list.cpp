class Solution {
public:
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        ListNode* curr;
        int sum=0,count=-1;
        curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        curr=head;
        while(curr!=NULL && count>=0){
            if(curr->val==0){
                count--;
                curr=curr->next;
            } 
            else{
                sum=sum+pow(2,count);
                count--;
                curr=curr->next;
            }
        }
        return sum;
    }
};

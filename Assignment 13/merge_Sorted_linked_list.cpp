class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode * res;
        ListNode * t;
        if(l1->val<l2->val){
            res = l1;
            t= l1;
            l1= l1->next;
        }else{
            res = l2;
            t = l2;
            l2 = l2->next;
        }
        while(l1&&l2!=NULL){
            if(l1->val<l2->val){
                t->next = l1;
                t= l1;
                l1= l1->next;
            }else{
                 t->next = l2;
                t= l2;
                l2= l2->next;
            }
        }
        if(l1==NULL){
            t->next= l2;
        }else{
            t->next = l1;
        }
        return res;
    }
};

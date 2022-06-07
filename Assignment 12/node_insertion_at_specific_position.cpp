SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int p) {
    SinglyLinkedListNode* ptr=new SinglyLinkedListNode(data);
    SinglyLinkedListNode* be;
    SinglyLinkedListNode* af;
    ptr->data=data;
    if(llist==NULL){
        llist=ptr;
    }
    be=llist;
    for(int i =1; i<p;i++){
        be= be->next;
    }
     af=be->next;
     be->next=ptr;
     ptr->next=af;
     return llist;       
}

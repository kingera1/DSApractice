void printLinkedList(SinglyLinkedListNode* temp) {
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
};

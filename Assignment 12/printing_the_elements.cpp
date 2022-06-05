void printLinkedList(SinglyLinkedListNode* temp) {    
    if (temp == NULL) {
        return;
    }
    else {
        while(temp != NULL){
            cout<<temp->data<<endl;
            temp = temp->next;            
        }
    }

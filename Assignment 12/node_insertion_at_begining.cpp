SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    
    SinglyLinkedListNode* ptr = new SinglyLinkedListNode(data);
    ptr ->next = llist;
    return ptr; 
}

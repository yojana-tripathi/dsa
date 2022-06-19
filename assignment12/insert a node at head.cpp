SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data){

    SinglyLinkedListNode* Node = new SinglyLinkedListNode(data);
    Node->next=llist;
    return Node;
  }

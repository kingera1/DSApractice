#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    int top;

    Node(int data)
    {

        this -> data = data;
        this -> next = NULL;
        top = -1;
    }

};
void push(Node* &top, int data){
    if(top == NULL)
    {
        Node* temp = new Node(data);
        top = temp;
    }
    else
    {
        Node* temp = new Node(data);
        temp -> next = top;
        top = temp;
    }
}

void pop(Node* &top){
    if(top == NULL)
        cout << "Stack underflow" << endl;
    else{
        Node* temp = top;
        top = top->next;
        temp->next = NULL;
        delete temp;
    }
}



int peek(Node* &top){
    if(top == NULL)
    {
        cout << "Stack underflow" << endl;
        return -1;
    }
    else
        return top->data;

}

bool isEmpty(Node* &top){
    if(top == NULL)
        return true;
    else 
        cout<<"stack is empty"<<endl;
        return false;
}

int main(){
    Node* top = NULL;

    push(top, 10);
    push(top, 20);
    push(top, 30);
    push(top, 22);
    
    pop(top);
    cout << peek(top) << endl;

    pop(top);
    cout << peek(top) << endl;
    
}

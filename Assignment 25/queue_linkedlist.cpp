#include <bits/stdc++.h>
using namespace std;

class Queue{
	struct Node{
		int data;
		Node* next;
		
	};
	Node*start,*end;
	int count;
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
		cout<<"constructor is Called\n";
		start=NULL;
		end=NULL;
		count=0;
	}
	
	//push the value at the back
	void push(int val){
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
		Node*n;
		n=new Node;
		n->data=val;
		if(start==NULL){
		    start=n;
		    end=start;
			
		}
		else{
			end->next=n;
		}
		count++;
		
	}
	
	int front(){
		cout<<"returning the value at front\n";
		if(start!=NULL) return start->data;
		return -1;
	}
	
	void pop(){
		cout<<"removing the first element\n";
		if(start){
			count--;
			cout<<start->data<<"\n";
			start=start->next;
		}

	}
	
	int size(){
		cout<<"return the size of the queue\n";
		return count;
	}
	
	bool isEmpty(){
		cout<<"returning if the queue is empty\n";
		if(start==NULL) return true;
		return false;
	}
};

int main() {
	Queue q; //constructor is called on this line
	q.push(4);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	q.push(5);
	q.push(3);
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	
	cout<<"front: "<<q.front()<<"\n";
	q.pop();
	cout<<"size: "<<q.size()<<"\n";
	cout<<"empty: "<<q.isEmpty()<<"\n";
	return 0;
}

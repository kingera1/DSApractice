#include<bits/stdc++.h>
using namespace std;

class Stack{
	public:
	int *arr;
	int top;
	int size;
	
	Stack(int size){
		this->size = size;
		arr =  new int[size];
		top = -1;
		
	}
	
	void push(int elements){
		if(size -top >1){
			top++;
			arr[top] = elements;
		}
		else cout<<"stack overflow"<<endl;
	}
	
	void pop(){
		if(top>=0){
			top--;
		}
		else cout<<"stack underflow"<<endl;
	}
	
	int peak(){
		if(top>=0) return arr[top];
		else {
			cout<<"stack is empty"<<endl;
			return -1;
		} 
	}
	bool isEmpty(){
		if(top==-1) return true;
		return false;
	}
};
int main(){
	Stack st(5);
	
	st.push(33);
	st.push(66);
	st.push(77);
  
  
	st.pop();
	cout<<st.peak()<<endl;
	
	st.pop();
	cout<<st.peak()<<endl;;
	
	st.pop();
	cout<<st.peak()<<endl;
	
	st.push(55);
	cout<<st.peak()<<endl;
	
	if(st.isEmpty()){
		cout<<"stack is empty";
	}
	else cout<<"stack is not empty"<<endl;
}

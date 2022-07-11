#include <iostream>
using namespace std;

class Queue{
	int A[100];
	int start;
	int end;
	
	public:
	//constructor is called whenever an object of the class is declared
	Queue(){
        start=0;
        end=0;
		cout<<"constructor is Called\n";
	}
	
	//push the value at the back
	void push(int val){
        A[end]=val;
        end++;
		cout<<"pushing the val: "<<val<<" at the back of queue\n";
	}
	
	int front(){
        if(start==end)
		cout<<"returning the value at front\n";
		return A[start];
	}
	
	void pop(){
        if(start!=end){
            start++;
        }
		cout<<"a is empty";
	}
	
	int size(){
        return end-start;
	}
	
	bool isEmpty(){
		if(start==end){
			return true;
		}
		cout<<"returning if the queue is empty\n";
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
	
	q.push(3);
	q.push(2);
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

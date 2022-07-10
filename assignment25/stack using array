#include <iostream>
using namespace std;

//complete the functions
class Stack{
	int A[10000];
	int size;
	int top;
	
	public:
	//constructor is called whenever an object of the class is declared
    Stack(int size){
        size=0;
        top=-1;
		cout<<"constructor is Called\n";
	}
	
	void push(int value){
        if(size-top>1){
            top++;
            A[top]=value;
        }else{
            cout<<"stack is full"<<"/n";
        }
	}
	
	
	void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack is overflow"<<"/n";
        }
		
	}
	
	int peek(){
        if(top>=0 && top<size){
            return A[top];
        }
        else{
            cout<<"stack is empty"<<"/n";
            return -1;
        }
	}
	
	bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            return false;
        }
		
	}
};

int main() {
	  Stack st(4); //constructor is called on this line

	st.push(5);
	st.push(3);
  st.push(4);
	cout<<"peek: "<<st.peek()<<"\n";
	st.pop();
	cout<<"peek: "<<st.peek()<<"\n";
	cout<<"empty: "<<st.isEmpty()<<"\n";
  
	st.pop();
	cout<<"peek: "<<st.peek()<<"\n";
	cout<<"empty: "<<st.isEmpty()<<"\n";
   
	return 0;
}



















	
    

#include<iostream>
using namespace std;
class stack{
    int top=-1;
    int size;
    int *arr;
  public:
    stack(int size){
        this->size=size;
        this->top=-1;
        arr=new int[size];
    }
  
  void push(int element){
        if(size-top>1)

        {
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop() {
        if(top!=-1){
            top--;

        }
        else{
            cout<<"stack underflow "<<endl;

        }
    }
       int topele() {
        if(top!=-1){
            return arr[top];

        }
        else{
            cout<<"stack is empty ";
            return -1;

        }
    }
      
        void isEmpty() {
        if(top!=-1){
            cout<<"stack is not empty ";

        }
        else{
            cout<<"stack is empty ";

        }
    }

    void display() {
        for (int i = top; i >= 0; i--) cout << arr[i] << " ";
        cout << endl;
    }

    void IsFull(){
        if(top==size-1){
            cout<<"is full";
        }
        else {
            cout<<"is not full";
        }
    }
        
    
};
int main(){
    stack s1={5};
    s1.push(24);
    s1.push(43);
    s1.push(44);
    s1.push(45);
    s1.push(78);
    s1.push(54);
    s1.display();
    s1.pop();
    cout<< s1.topele()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
     cout<< s1.topele()<<endl;
    s1.display();
    s1.isEmpty();
    s1.pop();
    s1.display();

    }
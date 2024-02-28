#include <iostream>
using namespace std;

class Stack{
    int size;
    int top;
    int *stack;
    public:
    Stack(int a){
        size = a;
        top = -1;
        stack = new int[a];
        cout << "Enter the data of Stack: " << endl;
        for(int i = 0; i < a ; ++i){
            cin >> *(stack + i);
        }
        top = size - 1;
    }
    void push(int data){
        stack[++top] = data;
    }
    void display(){
        if (top == -1) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; --i) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    int k;
    cout << "Enter Total Number of Elements of Stack: ";
    cin >> k;
    Stack s1(k);
    s1.push(55);
    s1.display();
    return 0;
}
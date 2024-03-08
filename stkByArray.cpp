#include <iostream>
using namespace std;

// A stack data structure implemented using an array.
class Stack {
    int size;
    int top;
    int *stack; // pointer to the array representing the stack

public:
    // Constructor
    Stack(int a) {
        size = a;
        top = -1; // indicates an empty stack
    }

    // Sets the data by taking input from the user
    void setData() {
        stack = new int[size]; // dynamically allocate memory
        cout << "Enter the data of Stack: \n";
        for (int i = 0; i < size; ++i) {
            cin >> *(stack + i); // stores the input
        }
        top = size - 1; // top = index of the last element
    }

    // Pushes an element onto the stack.
    void push(int data) {
        if (isFull()) {
            cout << "Can't push " << data << " to the stack\n\n";
            return;
        }
        stack[++top] = data; // increment top and add the element to the stack array
    }

    // Pops an element from the stack.
    void pop() {
        if (isEmpty()) {
            cout << "Can't pop an element\n\n";
            return;
        } else {
            --top; // decrement top to remove the top element from the stack
        }
    }

    // Returns the top element
    int topElement(){
        if(isEmpty()){
            return INT16_MIN;
        }
        else{
            return stack[top];
        }
    }

    // Displays the elements of the stack
    void display() {
        if (isEmpty()) {
            cout << "Can't display elements\n\n";
            return;
        }
        cout << "Stack : ";
        for (int i = top; i >= 0; --i) {
            cout << stack[i] << " "; // print the elements of the stack
        }
        cout << "\n\n";
    }

    // Functions to check if the stack is empty or full

    bool isEmpty() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return true;
        } else {
            return false;
        }
    }
    bool isFull() {
        if (top == (size - 1)) {
            cout << "Stack is Full\n";
            return true;
        } else {
            return false;
        }
    }
};

int main()
{
    cout << "\n\n";
    int k;
    cout << "Total Number of Elements: ";
    cin >> k;
    Stack s1(k);
    s1.pop();
    s1.display();
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.display();
    s1.push(4);
    int k = s1.topElement();
    s1.push(5);
    s1.pop();
    s1.pop();
    s1.display();
    s1.pop();
    s1.pop();
    return 0;
}

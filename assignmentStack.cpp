#include <iostream>
#include <stack>

using namespace std;

//int main()
//{
//  stack<int> myStack;
//    myStack.push(5);
//    myStack.push(3);
//    myStack.push(2);
//
//    cout <<"Numer of ints on the stack" <<myStack.size() <<endl;
//    while(myStack.empty())
//    {
//    cout << "popping" <<myStack.top() << endl;
//        myStack.pop();
//    }
//}
const int stackSize = 5;
int stackArray[stackSize];
int top = 0;

void push(int value) {
    if (top == stackSize - 1) {
        cout << "\n stack is Full";
    } else {
        stackArray[top++] = value;
    }
}

void pop() {
    if (top == -1) {
        cout << "\n stsck is Empty";
    } else {
        cout << stackArray[--top];
    }
}

void Display() {
    if (top == -1) {
        cout << "\n ,   ";
    } else {
        cout << "\n array is: ";
        for (int i = 0; i < top; ++i) {
            cout << "\t" << stackArray[i];
        }
    }
}

int main() {
    int value, choice;
    do {
        cout << "\n 1. PUSH \n 2. POP \n 3. DISPLAY \n 4. EXIT \n Input Choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "\n enter value: ";
            cin >> value;
            push(value);
        }

        if (choice == 2) {
            pop();
        }
        if (choice == 3) {
            Display();
        }
    } while (choice != 4);
    cout << "\n EXIT...\n";
    return 0;
}
    
    
    
    
    
    
    
    
    



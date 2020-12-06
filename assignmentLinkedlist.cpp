


#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

bool isEmpty(Node *head);

char menu();

void insertAsFirstElement(Node *&head, Node *&last, int data);

void insert(Node *&head, Node *&last, int data);

void remove(Node *&head, Node *&last);

void showList(Node *current);

bool isEmpty(Node *head) {
    if (head == nullptr)
        return true;
    else
        return false;
}

char menu() {
    char choice;
    cout << "Menu\n";
    cout << "1.add an item.\n";
    cout << "2.remove an item.\n";
    cout << "3.show the list.\n";
    cout << "4.Exit \n";
    cin >> choice;
    return choice;
}

void insertAsFirstElement(Node *&head, Node *&last, int data) {
    Node *temp = new Node;
    temp->data = data;
    temp->next = nullptr;
    head = temp;
    last = temp;
}

void insert(Node *&head, Node *&last, int data) {
    if (isEmpty(head))
        insertAsFirstElement(head, last, data);
    else {
        Node *temp = new Node;
        temp->data = data;
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

void remove(Node *&head, Node *&last) {
    if (isEmpty(head))
        cout << "The list is empty.\n";
    else if (head == last) {
        delete head;
        head == nullptr;
        last == nullptr;
    } else {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

void showList(Node *current) {
    if (isEmpty(current))
        cout << "list is empty.\n";
    else {
        cout << "the list contains:\n";
        while (current != nullptr) {
            cout << current->data << endl;
            current = current->next;
        }
    }
}


int main() {
    Node *head = nullptr;
    Node *last = nullptr;

    char choice;
    int data;

    do {
        choice = menu();

        switch (choice) {
            case '1':
                cout << "Enter a number:";
                cin >> data;
                insert(head, last, data);
                break;
            case '2':
                remove(head, last);
                break;
            case '3':
                showList(head);
                break;
            default:
                cout << "Exit\n";

        }
    } while (choice != '4');

    return 0;
}

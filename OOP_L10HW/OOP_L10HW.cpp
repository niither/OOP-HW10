#include <iostream>
using namespace std;

// вузол списка (або один елемент)
struct Node {
    int value; // корисні дані (useful data)
    Node* next; // адреса наступного вузла в списку

    Node(int value) {
        this->value = value;
        this->next = nullptr;
    }
};

int main()
{
    Node* head = nullptr;
    Node* tail = nullptr;

    Node* current = new Node(1);
    head = current;
    tail = current;

    current = new Node(2);
    tail->next = current;
    tail = current;

    current = new Node(3);
    tail->next = current;
    tail = current;

    current = new Node(4);
    tail->next = current;
    tail = current;

	// Додавання елемента в початок списку
	current = new Node(0);
	current->next = head;
	head = current;

    cout << head << "\n"; // адреса 0 елемента
    cout << head->value << "\n"; // значення 0 елемента
    cout << head->next << "\n"; // адреса 1 елемента
    cout << head->next->value << "\n"; // значення 1 елемента
    cout << head->next->next << "\n"; // адреса 2 елемента
    cout << head->next->next->value << "\n"; // значення 2 елемента
    cout << head->next->next->next << "\n"; // адреса 3 елемента
    cout << head->next->next->next->value << "\n"; // значення 3 елемента
    cout << head->next->next->next->next << "\n"; // адреса 4 елемента
    cout << head->next->next->next->next->value << "\n"; // значення 4 елемента
}
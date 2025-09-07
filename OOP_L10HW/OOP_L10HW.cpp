#include <iostream>
using namespace std;

// ����� ������ (��� ���� �������)
struct Node {
    int value; // ������ ��� (useful data)
    Node* next; // ������ ���������� ����� � ������

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

	// ��������� �������� � ������� ������
	current = new Node(0);
	current->next = head;
	head = current;

    cout << head << "\n"; // ������ 0 ��������
    cout << head->value << "\n"; // �������� 0 ��������
    cout << head->next << "\n"; // ������ 1 ��������
    cout << head->next->value << "\n"; // �������� 1 ��������
    cout << head->next->next << "\n"; // ������ 2 ��������
    cout << head->next->next->value << "\n"; // �������� 2 ��������
    cout << head->next->next->next << "\n"; // ������ 3 ��������
    cout << head->next->next->next->value << "\n"; // �������� 3 ��������
    cout << head->next->next->next->next << "\n"; // ������ 4 ��������
    cout << head->next->next->next->next->value << "\n"; // �������� 4 ��������
}
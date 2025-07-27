#include <iostream>
#include <string>

using namespace std;

struct Node {
    char data;
    Node* prev, * next;
    Node(char c = '\0') : data(c), prev(nullptr), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
    Node* cursor;
public:
    LinkedList() {
        head = new Node();
        cursor = head;
    }

    void addNode(char c) {
        Node* newNode = new Node(c);
        newNode->prev = cursor;
        newNode->next = cursor->next;

        if (cursor->next != nullptr)
            cursor->next->prev = newNode;
        cursor->next = newNode;

        cursor = newNode; // 커서를 새 노드 뒤로 이동
    }

    void delNode() {
        if (cursor == head) return; // 커서가 맨 앞이면 삭제할 것 없음

        Node* target = cursor;
        cursor = cursor->prev;

        cursor->next = target->next;
        if (target->next != nullptr)
            target->next->prev = cursor;

        delete target;
    }

    void moveBack() {
        if (cursor != head)
            cursor = cursor->prev;
    }

    void moveFront() {
        if (cursor->next != nullptr)
            cursor = cursor->next;
    }

    void printAll() {
        Node* cur = head->next;
        while (cur != nullptr) {
            cout << cur->data;
            cur = cur->next;
        }
    }

    ~LinkedList() {
        Node* cur = head;
        while (cur != nullptr) {
            Node* next = cur->next;
            delete cur;
            cur = next;
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LinkedList linked_list;
    string str, command;
    int M;

    cin >> str >> M;

    for (char ch : str)
        linked_list.addNode(ch);

    while (M--) {
        cin >> command;
        if (command == "L")
            linked_list.moveBack();
        else if (command == "D")
            linked_list.moveFront();
        else if (command == "B")
            linked_list.delNode();
        else if (command == "P") {
            char x;
            cin >> x;
            linked_list.addNode(x);
        }
    }

    linked_list.printAll();
    cout << '\n';

    return 0;
}

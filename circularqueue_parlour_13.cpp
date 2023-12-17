#include<iostream>
using namespace std;

struct Pizza {
    int order_no, order_type;
};

class Queue {
    Pizza orders[10];
    int count, rear, front;

public:
    Queue() : count(0), rear(-1), front(0) {}

    void insertOrder() {
        int n;
        cout << "\n1. Corn Pizza";
        cout << "\n2. Pizza";
        cout << "\n3. Chicken Pizza";
        cout << "\nHow many orders do you want to place? ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            if (count >= 10) {
                cout << "\nQueue overflow!";
                break;
            } else {
                count++;
                rear = (rear + 1) % 10;
                cout << "\nEnter your order: ";
                cin >> orders[rear].order_type;
                orders[rear].order_no = count;
            }
        }
    }

    void displayOrders() {
        int n;
        cout << "\nHow many orders do you want to display? ";
        cin >> n;

        for (int i = 0; i < n && i < count; i++) {
            cout << "\nOrder number " << orders[front].order_no << " is: ";
            if (orders[front].order_type == 1)
                cout << "Corn Pizza";
            else if (orders[front].order_type == 2)
                cout << "Pizza";
            else if (orders[front].order_type == 3)
                cout << "Chicken Pizza";
            front = (front + 1) % 10;
        }
    }
};

int main() {
    Queue q;
    int choice;

    do {
        cout << "\n1. Place order";
        cout << "\n2. Display orders";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                q.insertOrder();
                break;
            case 2:
                q.displayOrders();
                break;
            case 3:
                break;
            default:
                cout << "\nUnknown entry";
                break;
        }
    } while (choice != 3);

    return 0;
}


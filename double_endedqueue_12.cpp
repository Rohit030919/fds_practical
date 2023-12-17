#include <iostream>
using namespace std;

#define SIZE 5

class dequeue {
    int a[10], front, rear, count;

public:
    dequeue();
    void add_at_beg(int);
    void add_at_end(int);
    void display();
};

dequeue::dequeue() {
    front = -1;
    rear = -1;
    count = 0;
}

void dequeue::add_at_beg(int item) {
    int i;
    if (front == -1) {
        front++;
        rear++;
        a[rear] = item;
        count++;
    } else if (rear >= SIZE - 1) {
        cout << "\nInsertion is not possible, overflow!!!!";
    } else {
        for (i = count; i >= 0; i--) {
            a[i] = a[i - 1];
        }
        a[i] = item;
        count++;
        rear++;
    }
}

void dequeue::add_at_end(int item) {
    if (front == -1) {
        front++;
        rear++;
        a[rear] = item;
        count++;
    } else if (rear >= SIZE - 1) {
        cout << "\nInsertion is not possible, overflow!!!";
        return;
    } else {
        a[++rear] = item;
    }
}

void dequeue::display() {
    if (front == -1) {
        cout << "Dequeue is empty" << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << a[i]<<"->" << " ";
    }
}

int main() {
    int c, item;
    dequeue d1;

    do {
        cout << "\n\n****DEQUEUE OPERATION****\n";
        cout << "\n1-Insert at beginning";
        cout << "\n2-Insert at end";
        cout << "\n3-Display";
        cout << "\n4-Exit";
        cout << "\nEnter your choice <1-4>: ";
        cin >> c;

        switch (c) {
            case 1:
                cout << "Enter the element to be inserted: ";
                cin >> item;
                d1.add_at_beg(item);
                break;

            case 2:
                cout << "Enter the element to be inserted: ";
                cin >> item;
                d1.add_at_end(item);
                break;

            case 3:
                d1.display();
                break;

            case 4:
                exit(1);
                break;

            default:
                cout << "Invalid choice" << endl;
                break;
        }

    } while (c != 4);
    return 0;
}


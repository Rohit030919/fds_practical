#include<iostream>
using namespace std;

struct node {
    int roll;
    struct node *next;
};

class info {
    node *head = NULL;

public:
    node* create();
    void insert();
    void display();
    void allStudents();
    void uice();
    void notice();
};

node* info::create() {
    node *p = new (struct node);
    cout << "Enter student roll number: ";
    cin >> p->roll;
    p->next = NULL;
    return p;
}

void info::insert() {
    node *p = create();

    if (head == NULL) {
        head = p;
    } else {
        node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = p;
    }
}

void info::display() {
    node *temp = head;
    if (temp == NULL) {
        cout << "No student records to display." << endl;
        return;
    }

    cout << "Student roll numbers:" << endl;
    while (temp->next != NULL) {
        cout << temp->roll << " ";
        temp = temp->next;
    }
    cout << temp->roll << endl;
}

void info::allStudents() {
    int k;
    cout << "Enter number of students: ";
    cin >> k;
    head = NULL;
    for (int i = 0; i < k; i++) {
        insert();
    }
    display();
}

void info::uice() {
    node *temp = head;
    node *head3 = NULL;

    while (temp != NULL) {
        node *p = new(struct node);
        p->roll = temp->roll;
        p->next = NULL;

        if (head3 == NULL) {
            head3 = p;
        } else {
            node *temp3 = head3;
            while (temp3->next != NULL) {
                temp3 = temp3->next;
            }
            temp3->next = p;
        }

        temp = temp->next;
    }

    display(); // Display students who like vanila or butterscotch
}

void info::notice() {
    node *temp = head;
    node *h1 = head;
    node *temp3 = NULL;

    while (temp != NULL) {
        temp3 = head;
        int f = 0;

        while (temp3 != NULL) {
            if (temp->roll == temp3->roll) {
                f = 1;
                break;
            }
            temp3 = temp3->next;
        }

        if (f == 0) {
            cout << "\n" << temp->roll;
        }

        temp = temp->next;
    }
}

int main() {
    info s;
    int i;
    char ch;

    do {
        cout << "\nOptions:";
        cout << "\n1. To enter all students roll numbers";
        cout << "\n2. To display students who like vanila or butterscotch";
        cout << "\n3. To display students who neither like vanila nor butterscotch";
        cout << "\nEnter your choice: ";
        cin >> i;

        switch (i) {
            case 1:
                s.allStudents();
                break;
            case 2:
                s.uice();
                break;
            case 3:
                s.notice();
                break;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}


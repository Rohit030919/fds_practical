#include <iostream>
using namespace std;

struct node {
    int roll;
    struct node *next;
};

class info {
    node *head = NULL, *temp = NULL;

public:
    node *create();
    void insert();
    void display();
    void removeStudent(int rollNumber);
};

node *info::create() {
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
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = p;
    }
}

void info::display() {
    temp = head;
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

void info::removeStudent(int rollNumber) {
    if (head == NULL) {
        cout << "No students to remove." << endl;
        return;
    }

    temp = head;
    node *prev = NULL;

    // If the first node contains the roll number to be removed
    if (temp != NULL && temp->roll == rollNumber) {
        head = temp->next;
        delete temp;
        cout << "Student with roll number " << rollNumber << " removed." << endl;
        return;
    }

    // Search for the roll number in the list
    while (temp != NULL && temp->roll != rollNumber) {
        prev = temp;
        temp = temp->next;
    }

    // If roll number not found in the list
    if (temp == NULL) {
        cout << "Student with roll number " << rollNumber << " not found." << endl;
        return;
    }

    // Remove the node containing the roll number
    prev->next = temp->next;
    delete temp;
    cout << "Student with roll number " << rollNumber << " removed." << endl;
}
int main() {
    info s;
    int choice, rollNumber;
    char ch;

    do {
        cout << "\nOptions:";
        cout << "\n1. Add a student roll number";
        cout << "\n2. Remove a student roll number";
        cout << "\n3. Display all student roll numbers";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.insert();
                break;
            case 2:
                cout << "Enter the roll number to remove: ";
                cin >> rollNumber;
                s.removeStudent(rollNumber);
                break;
            case 3:
                s.display();
                break;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> ch;

    } while (ch == 'y' || ch == 'Y');

    return 0;
}


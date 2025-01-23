#include <iostream>
#include <string>
#include <limits>
using namespace std;

struct Student {
    string name, YearName, branch, roll_number;

    void display() const {
        cout << "Name: " << name << ", Year: " << YearName << ", Branch: " << branch << ", roll_number: " << roll_number << endl;
    }

    void edit() {
        cout << "Enter new details (Name Year Branch roll_number): ";
        cin >> name >> YearName >> branch >> roll_number;
    }
};

void searchAndEditStudent(Student students[], int count) {
    string name;
    cout << "Enter name to search: ";
    cin >> name;
    for (int i = 0; i < count; ++i) {
        if (students[i].name == name) {
            students[i].display();
            cout << "Edit details? (y/n): ";
            char choice;
            cin >> choice;
            if (choice == 'y' || choice == 'Y') students[i].edit();
            return;
        }
    }
    cout << "Student not found!" << endl;
}

int main() {
    const int studentCount = 5;
    Student students[studentCount];

    for (int i = 0; i < studentCount; ++i) {
        cout << "Enter details for student " << i + 1 << " (Name Year Branch roll_number): ";
        cin >> students[i].name >> students[i].YearName >> students[i].branch >> students[i].roll_number;
    }

    // Clear any remaining input in the buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    searchAndEditStudent(students, studentCount);

    cout << "Displaying all students:\n";
    for (const auto& student : students) {
        student.display();
    }
    return 0;
}

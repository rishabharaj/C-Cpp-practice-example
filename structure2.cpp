#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name, className, branch;
    float cgpa;
    void display() const {
        cout << "Name: " << name << ", Class: " << className << ", Branch: " << branch << ", CGPA: " << cgpa << endl;
    }
    void edit() {
        cout << "Enter new details (Name Class Branch CGPA): ";
        cin >> name >> className >> branch >> cgpa;
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
            char choice; cin >> choice;
            if (choice == 'y' || choice == 'Y') students[i].edit();
            return;
        }
    }
    cout << "Student not found!" << endl; }

int main() {
    const int studentCount = 5;
    Student students[studentCount];
    for (int i = 0; i < studentCount; ++i) {
        cout << "Enter details for student " << i + 1 << " (Name Class Branch CGPA): ";
        cin >> students[i].name >> students[i].className >> students[i].branch >> students[i].cgpa;
    }

    searchAndEditStudent(students, studentCount);
    cout << "Displaying all students:\n";
    for (const auto& student : students) {
        student.display();
    }
    return 0;
}

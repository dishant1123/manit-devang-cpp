#include <iostream>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

class student : public person {
protected:
    int rollno;

public:
    student(string name, int age, int rollno) : person(name, age) {
        this->rollno = rollno;
    }
};

class result : public student {
private:
    int marks[3];
    int total;
    float percentage;

public:
    result(string name, int age, int rollno, int m1, int m2, int m3)
        : student(name, age, rollno) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        total = m1 + m2 + m3;
        percentage = total / 3.0; // use 3.0 for float division
    }

    // only one friend function
    friend void show(result r);
};

void show(result r) {
    cout << "======== Student Details =======\n";
    cout << "Name : " << r.name << endl;
    cout << "Age : " << r.age << endl;
    cout << "Roll No : " << r.rollno << endl;
    cout << "======== Result Details =======\n";
    cout << r.marks[0] << " " << r.marks[1] << " " << r.marks[2] << endl;
    cout << "Total : " << r.total << endl;
    cout << "Percentage : " << r.percentage << endl;
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        string name;
        int age, rollno, m1, m2, m3;

        cout << "\nEnter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Roll No: ";
        cin >> rollno;
        cout << "Enter 3 marks: ";
        cin >> m1 >> m2 >> m3;

        result r(name, age, rollno, m1, m2, m3); // ✅ correct constructor call
        show(r); // ✅ call friend function
    }

    return 0;
}

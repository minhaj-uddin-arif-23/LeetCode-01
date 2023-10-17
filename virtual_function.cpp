#include <iostream>
using namespace std;

class person {
protected:
    string name;
    int age;

public:
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public person {
    int publications;
    static int cur_id;

public:
    void getdata() {
        cin >> name >> age >> publications;
    }

    void putdata() {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
        cur_id++;
    }
};

int Professor::cur_id = 1;

class Student : public person {
    int marks[6];
    static int cur_id;

public:
    void getdata() {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() {
        int total = 0;
        for (int i = 0; i < 6; i++) {
            total += marks[i];
        }
        cout << name << " " << age << " " << total << " " << cur_id << endl;
        cur_id++;
    }
};

int Student::cur_id = 1;

int main() {
    int n, val;
    cin >> n; // the number of objects to create
    person *per[n];

    for (int i = 0; i < n; i++) {
        cin >> val;
        if (val == 1) {
            per[i] = new Professor;
            per[i]->getdata(); // Read data for Professor
        } else {
            per[i] = new Student;
            per[i]->getdata(); // Read data for Student
        }
    }

    // Display data
    for (int i = 0; i < n; i++) {
        per[i]->putdata();
    }

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    string name, dept, subject;
    double salary;

    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t;
    t.name = "Dr. Smith";
    t.dept = "Computer Science";
    t.subject = "Data Structures";
    t.salary = 100000;
    cout << t.name << " teaches " << t.subject << " in the " << t.dept << " department and earns $" << t.salary << " per year." << endl;
    return 0;
}
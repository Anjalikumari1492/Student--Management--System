#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:
    void getData()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << "\nRoll Number: " << roll << endl;
        cout << "Student Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s[3];

    cout << "Enter Student Details\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\n\nStudent Records";

    for(int i = 0; i < 3; i++)
    {
        cout << "\n\nStudent " << i + 1;
        s[i].displayData();
    }

    return 0;
}
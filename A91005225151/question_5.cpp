#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    int id;
    float basic_salary;
    string name;

public:
    
    Person() {
        cout << "\nEnter id: ";
        cin >> this->id;
        
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, this->name);
        
        cout << "Enter salary: ";
        cin >> this->basic_salary;
    }

    void display() {
        float hra = basic_salary * 0.20f;
        float da  = basic_salary * 0.50f;
        float ta  = basic_salary * 0.10f;
        float gross_salary = basic_salary + hra + da + ta;

        cout << "\n----- Employee Details -----" << endl;
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic Salary: $" << basic_salary << endl;
        cout << "HRA: $" << hra << endl;
        cout << "DA: $" << da << endl;
        cout << "TA: $" << ta << endl;
        cout << "Gross Salary: $" << gross_salary << endl;
    }
};

int main() {
    int c;
    
    cout << "Enter emplyoee details:" << endl;
    Person p[10];

    cout << "\nTo print every employee press 1 else 0: ";
    cin >> c; 
    
    if (c == 1) {
        for (int i = 0; i < 10; i++) {
            p[i].display();
        }
    } 

    return 0;
}

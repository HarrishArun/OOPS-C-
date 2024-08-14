#include <iostream>
using namespace std;

class Abstractclass {
    virtual void promotion() = 0;  // Pure virtual function (abstraction)
};

class Employee : Abstractclass {
    private:
        string Name;  // Hidden private member
        int Age;      // Hidden private member

    public:
        Employee(string name, int age) {
            Name = name;
            Age = age;
        }

        void showname() {
            cout << Name << endl;
        }

        void promotion() {
            if (Age > 30) 
                cout << Name << " Promoted" << endl;
            else 
                cout << Name << " Not-Promoted" << endl;
        }
};

int main() {
    Employee e1 = Employee("Harrish", 21);
    e1.showname();     // Output: Harrish
    e1.promotion();    // Output: Harrish Not-Promoted

    return 0;
}

// In abstracted class, the complex logic for promotion is stored as pure virtual function = 0 
// and if so the class signing that must have logic for it 

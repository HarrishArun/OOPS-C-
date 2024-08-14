#include <iostream>
using namespace std;

class Abstractclass {
    virtual void promotion() = 0;  // Pure virtual function (abstraction)
};

class Employee : Abstractclass {
    protected:
        string Name;  // Protected allows access in derived classes
        int Age;

    public:
        Employee(string name, int age) {
            Name = name;
            Age = age;
        }

        virtual void showname() { // Virtual function to support polymorphism
            cout << Name << " from emp" << endl;
        }

        void promotion() {
            if (Age > 30) 
                cout << Name << " Promoted" << endl;
            else 
                cout << Name << " Not-Promoted" << endl;
        }
};

class developer : public Employee {
    public:
        string Favlang;

        developer(string name, int age, string favlang) : Employee(name, age) {
            Favlang = favlang;
        }

        void showname() override {
            cout << Name << " from dev" << endl;  // Overrides Employee's showname
        }

        void showfav() {
            cout << Favlang << endl;
        }
};

int main() {
    Employee e1 = Employee("Harrish", 21);
    e1.showname();  // Output: Harrish from emp
    e1.promotion(); // Output: Harrish Not-Promoted

    developer d = developer("H", 18, "c");
    d.showfav();    // Output: c
    d.showname();   // Output: H from dev

    // Polymorphism
    Employee *el = &d;
    el->showname(); // Output: H from dev

    // Explanation: If I use this directly without the word 'virtual' before showname in Employee, 
    // it will show "H from emp" but I'm referring from d address. 
    // So I use 'virtual' which allows to use "H from dev".
    // Virtual checks if derived has the same function name, if so execute it instead.

    return 0;
}

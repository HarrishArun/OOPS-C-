#include <iostream>
using namespace std;

class Employee {
    private:
        string Name;  // Name is hidden and private
        int Age;      // Age is hidden and private

    public:
        Employee(string name, int age) {
            Name = name;
            Age = age;
        }

        void showname() {
            cout << Name;  // Accessing the private Name through a public method
        }
};

int main() {
    Employee e1 = Employee("Harrish", 21);
    e1.showname();  // Output: Harrish

    return 0;
}

// Abstraction hides Name, Age in private still stored in it and using getter setter to prevent access to private is encapsulation

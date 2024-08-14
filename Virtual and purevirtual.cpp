
//virtual
#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void MakeSound() {
        cout << "Instrument sound...\n";
    }
};

class Accordion : public Instrument {
public:
    void MakeSound() override { // Override the virtual function
        cout << "Accordion playing...\n";
    }
};

int main() {
    Instrument* i1 = new Accordion();
    i1->MakeSound(); // Calls the overridden function in Accordion
    delete i1;
    return 0;
}
//pure virtual

#include <iostream>
using namespace std;

class Instrument {
public:
    virtual void MakeSound() = 0; // Pure virtual function
};

class Accordion : public Instrument {
public:
    void MakeSound() override { // Must implement the pure virtual function
        cout << "Accordion playing...\n";
    }
};

int main() {
    Instrument* i1 = new Accordion();
    i1->MakeSound(); // Calls the implemented function in Accordion
    delete i1;
    return 0;
}


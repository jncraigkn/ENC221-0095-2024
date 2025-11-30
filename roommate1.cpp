#include <iostream>
#include <string>
using namespace std;

// Define a Roommate class
class Roommate {
public:
    string name;      // Roommate's name
    int age;          // Roommate's age
    string favFood;   // Roommate's favourite food
    string hobby;     // Roommate's hobby

    // Function to print roommate details
    void introduce() {
        cout << "My roommate is " << name
             << ", he is " << age
             << " years old, his favourite food is " << favFood
             << ", and he likes " << hobby << "." << endl;
    }
};

int main() {
    // Create a roommate object
    Roommate r;
    r.name = "Jonncraig";
    r.age = 21;
    r.favFood = "Pizza";
    r.hobby = "cycling";

    // Call the introduce function
    r.introduce();

    return 0;
}


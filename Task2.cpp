/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age, birthYear;

    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    birthYear = 2026 - age;

    cout << "\nStudent Information" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    char grade;
    double fee;

    cout << "Enter your grade: ";
    cin >> grade;

    cout << "Enter your fee: ";
    cin >> fee;

    cout << "\nStudent Details" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Fee: " << fee << endl;

    return 0;
}

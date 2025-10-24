#include <iostream>
using namespace std;
int main() {
    int currentYear, birthYear;
    cout << "Enter current year:";
    cin >> currentYear;
    cout << "Enter year of birth:";
    cin >> birthYear;
int age = currentYear - birthYear;
cout<< "Applicant's age:"<<age<<endl;
if(age >= 18 && age <= 28)
    cout << "Applicant is eligible for recuirement." <<endl;
else
    cout << "Applicant is NOT eligible fore recuirement." <<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159265358979323846;
    double radius, height;
    double area, volume;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    area = 2 * PI * radius * height + 2 * PI * radius * radius;
    volume = PI * height * radius * radius;
    cout << "The surface area of the cylinder is: " << area << endl;
    cout << "The volume of the cylinder is: " << volume << endl;
    return 0;
}

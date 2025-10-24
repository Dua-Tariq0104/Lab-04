#include <iostream>
    using namespace std;

    int main() {
        double length1, width1, length2, width2;
        cout << "Enter the length of Rectangle 1: ";
        cin >> length1;
        cout << "Enter the width of Rectangle 1: ";
        cin >> width1;
        cout << "Enter the length of Rectangle 2: ";
        cin >> length2;
        cout << "Enter the width of Rectangle 2: ";
        cin >> width2;

        double area1 = length1 * width1;
        double area2 = length2 * width2;

        cout << "\nArea of Rectangle 1: " << area1 << endl;
        cout << "Area of Rectangle 2: " << area2 << endl;

        if (area1 == area2)
            cout << "Both rectangles have equal areas." << endl;
        else if (area1 > area2)
            cout << "Rectangle 1 has a larger area." << endl;
        else
            cout << "Rectangle 2 has a larger area." << endl;

        return 0;
    }

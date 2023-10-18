#include <iostream>
#include <cmath>

using namespace std;

// Function to compute the area of a circle
double areaCircle() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    return M_PI * pow(radius, 2);
}

// Function to compute the area of a rectangle
double areaRectangle() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return length * width;
}

// Function to compute the area of a triangle
double areaTriangle() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    return 0.5 * base * height;
}

int main34() {
    char choice;
    while (true) {
        cout << "\nMenu:" << endl;
        cout << "a) Compute area of circle" << endl;
        cout << "b) Compute area of rectangle" << endl;
        cout << "c) Compute area of triangle" << endl;
        cout << "d) Exit" << endl;

        cout << "Enter your choice (a/b/c/d): ";
        cin >> choice;

        switch (choice) {
            case 'a':
                cout << "The area of the circle is: " << areaCircle() << " square units" << endl;
                break;
            case 'b':
                cout << "The area of the rectangle is: " << areaRectangle() << " square units" << endl;
                break;
            case 'c':
                cout << "The area of the triangle is: " << areaTriangle() << " square units" << endl;
                break;
            case 'd':
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option (a/b/c/d)." << endl;
        }
    }
}


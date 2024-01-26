#include <iostream>
#include <cmath> // for sqrt function







using namespace std;




class Point {
private:

    double x; // x coordinate

    double y; // y coordinate


publ
ic:

// Constructor to initialize the point with specified coordinates

Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}



// Method to get x coordinate

double getX() const {

    return x;
    
}


    // Method to set x coordinate

void setX(double newX) {

    x = newX;
    
}



// Method to get y coordinate

double getY() const {

    return y;
    
}



// Method to set y coordinate

void setY(double newY) {

    y = newY;
    
}



// Method to calculate distance between two points

double distance(const Point& other) const {

    double deltaX = x - other.x;
    
    double deltaY = y - other.y;

    return sqrt(deltaX * deltaX + deltaY * deltaY);
    
}

};



int main() {

    // Variables to store user input

    double x1, y1, x2, y2;


    
    // Prompt the user to enter coordinates for point 1
    
    cout << "Enter x coordinate for Point 1: ";
    
    cin >> x1;
    
    cout << "Enter y coordinate for Point 1: ";
    
    cin >> y1;


    
    // Prompt the user to enter coordinates for point 2
    
    cout << "Enter x coordinate for Point 2: ";
    
    cin >> x2;
    
    cout << "Enter y coordinate for Point 2: ";
    
    cin >> y2;


    
    // Create two points using user input
    
    Point p1(x1, y1);
    
    Point p2(x2, y2);


    
    // Print the coordinates of the points
    
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;


    
    // Calculate and print the distance between the points
    
    cout << "Distance between the points: " << p1.distance(p2) << endl;


    
    return 0;
}




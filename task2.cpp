#include <iostream>
#include <cmath> // for sqrt function

using namespace std;

class Point {
private:
    double x; // x coordinate
    double y; // y coordinate

public:
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
    // Create two points
    Point p1(1.0, 2.0);
    Point p2(4.0, 6.0);

    // Print the coordinates of the points
    cout << "Point 1: (" << p1.getX() << ", " << p1.getY() << ")" << endl;
    cout << "Point 2: (" << p2.getX() << ", " << p2.getY() << ")" << endl;

    // Calculate and print the distance between the points
    cout << "Distance between the points: " << p1.distance(p2) << endl;

    return 0;
}

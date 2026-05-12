#include <iostream>
#include <string>
#include <cmath>
#include <vector>

//Class declaration
class Point {

    
    private:
    //attributes

    double x;
    double y;

    public:
    //constructors
    //------------

    Point(){
        x = 0;
        y = 0;
    }

    Point(double initialX, double initialY) {
        x = initialX;
        y = initialY;
    }

    //Methods
    //(note that these are also public)
    //-------------

    //getters and setters
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void setX(double newX){
        x = newX;
    }

    void setY(double newY){
        //write the correct code here
    }

    //enquiry methods
    //------------------
    double distanceTo(Point anotherPoint){
        //write the correct code here
        return 0.0;
    }

    //display method
    //--------------------

    std::string toString() {
        return "(" + std::to_string(x) + ", "
                   + std::to_string(y) + ")";
    }


}; //end of class declaration POINT

//Function inquiring about two points

Point midPoint(Point point1, Point point2) {
    Point midPoint(0.0,0.0);

    //write the correct code here
    return midPoint;
}


//Class declaration
//-----------------

class Polygon {
    protected:
    std::vector<Point> points;

    public:

    //constructor(s)
    //---
    Polygon(int n) {
         for (int i=0; i<n; i++) {
            points.push_back(Point(0,0));
         }
    }

    //enquiry methods
    //------------------
    virtual double area() = 0;
};

class Rectangle : public Polygon {
    public:

    //constructors
    //---
    Rectangle(std::vector<Point> initialPoints) : Polygon(4) {
        for (int i=0; i<4; i++) {
            points[i] = initialPoints[i];
        }
    }

    //enquiry methods
    //------------------
    double area() {
        //write correct code here
        return 0;
    }


};



int main() {

    Point p1(0.0, 0.0);
    Point p2(3.0, 4.0);

    std::vector<Point> somePoints = { Point(0,0), Point(2,3), p1, p2};


    Rectangle rect(somePoints);

    double distance = 0.0;

    distance = p1.distanceTo(p2);

    std::cout << "p1 = " << p1.toString() << std::endl;
    std::cout << "p2 = " << p2.toString() << std::endl;

    std::cout << "p2.y = " << p2.getY() << std::endl;
    std::cout << "distance = " << distance << std::endl;
    

    return 0;
}

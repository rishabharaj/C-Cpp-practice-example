#include<iostream> 
using namespace std; 
class Shapes { public:
float area(float length, float breadth) { return length * breadth;
}
float area(float side) { return side * side; }
};
int main(){
 Shapes shape;
float length, breadth, side;
cout << "Enter length and breadth of the rectangle: ";
cin >> length >> breadth;
cout << "Area of the rectangle: " << shape.area(length, breadth) <<endl;
 cout << "Enter side of the square: ";
cin >> side;
cout << "Area of the square: " << shape.area(side) << endl; return 0;
}

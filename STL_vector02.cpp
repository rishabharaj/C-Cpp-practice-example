// in this code, we define a class `vector` 
// includes a method to calculate the dot product with another vector.
/* in this method we take another vector as a parameter and calculate the dot product
   by multiplying corresponding elements and summing them up.
   The main function creates two vectors, assigns values to their elements,
   and then calculates and prints the dot product of the two vectors.
*/
// in the template is defined to allow the vector class to work with any data type,
// we used T as a placeholder for the data type.


#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T *arr;
    int size;
vector(int s){
    size = s;
    arr = new T[size];
}
T dotproduct(vector &v){
    T d = 0;
    for(int i = 0; i < size; i++){
        d += arr[i] * v.arr[i];
    }
    return d;
}
};

int main(){
    vector <float> v1(3);
v1.arr[0] = 1;
v1.arr[1] = 2;
v1.arr[2] = 3;
    vector <float> v2(3);
v2.arr[0] = 1.23;
v2.arr[1] = 0.25;
v2.arr[2] = 1.35;
float a = v1.dotproduct(v2);
cout << "Dot product: " << a << endl;
    return 0;}

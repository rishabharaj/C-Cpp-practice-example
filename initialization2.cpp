#include<iostream>
int main(){
// 4 ways to initialize built-in type: Assignment, Function, Syntax or calling a constructor.
int a = 1;
int b = int(2);
int c(3);
int d{4}; 
int e = {5};
printf(" A = %d \n B = %d \n C = %d \n D = %d \n E = %d \n", a,b,c,d,e);

int f=9;
int g=4;
int h;
h = f + 8, g + 1; //17,5 but only assing the left side because left has = and , has a lower precedence
std::cout<<" H = "<<h<<std::endl;
h = (f + 8, g + 1); // prints 5 with bracket and without 17
std::cout<<" H = "<<h<<std::endl;
    return 0;
}
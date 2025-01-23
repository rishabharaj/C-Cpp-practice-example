#include <cmath>
#include <iostream>

constexpr int traing(int i){
    return (i == 0) ? 0 : traing(i - 1) + i;
}   // expression can be evaluated at compile time or rather run time.
int main() { 
    int n;
    std::cout<<"type any number\n";
    std::cin>>n;
    constexpr double pi =31.1415;
    constexpr double twopi = 2 * pi;
    int result = traing(n);
    std::cout<<"the sum of all integers = "<<result<<std::endl;
    return 0;
}

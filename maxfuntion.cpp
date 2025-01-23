// #include <iostream>
// #include <cstdio>
// using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/


  /*   int main() {
    int a, b, c, d;
    int max_of_four(int a, int b ,int c,int d );
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a,int b,int c,int d){
    if(a>b && a>c && a>d){
    return a;    
    }
    else if (b>a && b>c && b>d) {
        return b;    }
    else if(c>a && c>b && c>d){
        return c;}
    else{ return d;} }
                    */

    // method 2nd
    #include <iostream>
#include <cstdio>
using namespace std;

// Function declaration
int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    int max = max_of_four(a, b, c, d);
    cout << "Maximum of the four numbers: " << max << endl;

    return 0;
}

// Function definition
int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
}

    

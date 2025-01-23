#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int num;
    long b;
    char c;
    float d;
    double e;

    scanf("%d",&num);
    scanf("%ld",&b);
    // Add a space before %c to consume the newline character in the buffer
    scanf(" %c",&c);
    scanf("%f",&d);
    scanf("%lf",&e);

    printf("%d\n",num);
    printf("%14ld\n",b);
    printf("%c\n",c);
    printf("%.3f\n",d);
    printf("%.9lf\n",e);

    return 0;
}

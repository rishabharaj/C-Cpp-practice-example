#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{ int a,b;
    float c,d;
    scanf("%d %d",&a,&b); // 10 4
    scanf("%f %f",&c,&d); // 4.0 2.0
    printf("%d %d\n",a+b,a-b);  // 14 6
    printf("%.1f %.1f",c+d,c-d);  // 6.0 2.0
    return 0;
}
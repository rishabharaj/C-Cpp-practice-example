#include<iostream>
 main(){
    int a=2;
    a = a++ + ++a -a-- - --a;   // a = 2 + 4 - 4 -2 beacause pre and post operator
    printf("%d",a);
 }
#include<stdio.h>

int main (){
int age = 22;
int *ptr = &age;
printf("ptr = %u\n",ptr);
ptr++;    // +1 data type increase hoga 
          // yha int hai to 4 byte increase ho jayega
printf("ptr = %u\n",ptr);
ptr--;
printf("ptr = %u\n",ptr);
ptr--;
printf("ptr = %u",ptr);

return 0;
}
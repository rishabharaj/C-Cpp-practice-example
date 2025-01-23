#include<stdio.h>
int main () 
{
    int n;
int sum =0;;
printf("enter any number n= ");
scanf("%d",&n);
for(int i=0; i<=n; i++)
{   sum=sum+i;
    }
    printf("%d\n",sum);
    for(int i=n; i>=0; i--){
        printf("%d\n",i);
    }
    
//     for(char ch= 'a'; ch<='z'; ch++)
//    { printf("%c \n", ch);
// }

// int i=0;
// while(i<=5){
//     printf("%d\n",i);
//     i++;
// }
return 0;
}
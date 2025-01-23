#include<iostream>
using namespace std;
int main(){
int day;
cout<< "enter day (1-7)\n";
cin>>day;

switch (day){
    case 1 : printf("monday\n");
            break;
    case 2 : printf("tueday\n");
            break;
    case 3 : printf("wedenesday\n");
            break;
    case 4 : printf("thursday\n");
            break;
    case 5 : printf("friday\n");
            break;
    case 6 : printf("saturday\n");
            break;
    case 7 : printf("sunday\n");
            break;
    default : cout << "not a valid day";
}
return 0;
}

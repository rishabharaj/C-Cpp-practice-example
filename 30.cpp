#include<iostream> 
                  using namespace std;	
int main(){ int n;
cout << "Enter an integer : ";
cin >> n;
for(int i = 1 ; i<=n/2 ; i++)
{
if(n% i== 0)
{
cout << i << endl;
}
}
return 0;

}

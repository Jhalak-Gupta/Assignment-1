#include <iostream>
using namespace std;

int main()
{
    int n1, n2, x, y;
    cout<<"Enter first number:";
    cin>>n1;
    cout<<"Enter second number:";
    cin>>n2;

    for(int i=1; i<n1 || i<n2; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            x=i;
        }       
    }
    cout<<"HCF:"<<x<<endl;

    int max= (n1>n2)?n1:n2;
    for(int j=max ; j<n1*n2; j++)
    {
        if (j%n1==0 && j%n2==0)
        {
            y=j;
            break;
        }
    }
    cout<<"LCM:"<<y<<endl;
    
    return 0;
}

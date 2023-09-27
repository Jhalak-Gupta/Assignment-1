#include <iostream>
using namespace std;

int main()
{
    int n,r,x=0;
    cout<<"Enter a number:";
    cin>>n;
    while (n != 0)
    {
        r=n%10;
        x=x*10+r;
        n/=10;
    }
    cout<<"Reversed number:"<<x<<endl;
    return 0;
}

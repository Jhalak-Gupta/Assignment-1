#include <iostream>
using namespace std;

int main()
{
    int n,x;
    cout<<"Enter a number:";
    cin>>n;
    for(x=0; n>0; x++)
    {
        n=n/10;
    }
    cout<<"Number of digits:"<<x<<endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter the number:";
    cin>>x;
    for(int i; i<=x/2; i++)
    {
        if (x%i==0)
        {
        cout<<"Prime"<<endl;
        break;
        }
        else
        cout<<"Composite"<<endl;  
    }
    return 0;
}

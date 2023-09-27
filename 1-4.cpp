#include <iostream>
using namespace std;

int main()
{
    int n, i, j, t;
    cout<<"Enter a number:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        t=0;
        for(j=1; j<=i; j++)
        {
            if(i%j==0)
            {
                t++;
            }
        }
        if (t==2)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}

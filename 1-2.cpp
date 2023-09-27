#include <iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter percentage of marks:";
    cin>>x;
    if (x>75)
    cout<<"Grade A"<<endl;
    else if (75>x && x>50)
    cout<<"Grade B"<<endl;
    else
    cout<<"Grade C"<<endl;
    return 0;
}

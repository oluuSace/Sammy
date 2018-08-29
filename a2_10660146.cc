#include <iostream>
using namespace std;
int main()
{
    int i, userinput;
    cout<<"Enter any num: ";
    cin>>userinput;

    for(i=2; i<userinput; i++)
    {
        if(userinput%i==0)
        {
            cout<<"Not prime number";
            break;
        }
    }
    if(userinput==i)
    {
        cout<<"A Prime Number";
    }
    return 0;
}

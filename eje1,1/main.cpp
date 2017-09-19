#include <iostream>

using namespace std;

int main()
{
    int t=7;
    int arr[]={2,3,4,5,6,5,8};
    int s=0;
    for(int i=0;i<t;i++)
    {
        s=s+arr[i];
    }
    cout<<s;
    return 0;
}


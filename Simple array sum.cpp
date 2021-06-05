#include<iostream>

using namespace std;

int main()
{
    int n,a[10000],i,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    cout<<s;
}


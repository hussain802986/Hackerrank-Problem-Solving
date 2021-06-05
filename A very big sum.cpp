#include<iostream>

using namespace std;

int main()
{
    long long int a[10],n,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    cout<<s;
    return 0;
}


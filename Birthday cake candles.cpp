#include<iostream>

using namespace std;

int main()
{
    int a[1000000],n,i,max=0,c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        max=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==max)
        c++;
    }
    cout<<c;
}


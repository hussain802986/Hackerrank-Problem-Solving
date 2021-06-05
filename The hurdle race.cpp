#include<iostream>

using namespace std;

int main()
{
    int n,k,max=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        max=a[i];
    }
    if(max>k)
    cout<<max-k<<endl;
    else
    cout<<"0"<<endl;
    return 0;
}


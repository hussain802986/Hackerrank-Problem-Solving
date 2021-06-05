#include<iostream>

using namespace std;

int main()
{
    int n,k,b,i;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }    
    cin>>b;
    int s=0;
    for(i=0;i<n;i++)
    {
        if(i==k)
            continue;
        s+=a[i];
    }
    //cout<<s<<endl;
    if((s/2)==b)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<b-(s/2)<<endl;
    return 0;
}


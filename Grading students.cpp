#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if((a[i]+1)%5==0&&a[i]>40)
            a[i]+=1;
        else if((a[i]+2)%5==0&&a[i]>40)
            a[i]+=2;
        else if(a[i]==38)
            a[i]+=2;
        else if(a[i]==39)
            a[i]+=1;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}


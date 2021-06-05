#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j;
    cin>>t;
    int a[t],c=0;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(a[i]==a[j]&&a[i]>0)
            {
                c++;
                a[i]=0;
                a[j]=0;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}


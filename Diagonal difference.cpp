#include<iostream>
#include<cstdlib>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,d1=0,d2=0;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        cin>>a[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            d1+=a[i][j];
        }
    }
    //cout<<d1<<endl;
    
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>=0;j--)
        {
            if((i+j)==n-1)
            {
                d2+=a[i][j];
            }           
        }
    }
    //cout<<d1<<endl<<d2<<endl;
    cout<<abs(d1-d2);
}


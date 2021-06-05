#include<iostream>

using namespace std;

int main()
{
    long long int j,a[5],b[5]={0,0,0,0,0},i,k=0;
    for(i=0;i<5;i++)
    cin>>a[i];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(k==j)
            continue;
            else
            b[i]+=a[j];
           // cout<<b[i]<<" ";
        }
        k++;
    }
    long long int max=0,min=b[0];
    for(i=0;i<5;i++)
    {
        if(b[i]>max)
        max=b[i];
        if(b[i]<min)
        min=b[i];
    }
    cout<<min<<" "<<max;
    return 0;
}


#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a[10000],n,i;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    double p=0,ne=0,z=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        p++;
        else if(a[i]<0)
        ne++;
        else
        z++;
    }
    printf("%0.6lf\n%0.6lf\n%0.6lf",p/n,ne/n,z/n);
    return 0;
}


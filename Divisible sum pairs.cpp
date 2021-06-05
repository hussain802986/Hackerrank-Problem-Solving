#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],c=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int s=a[i]+a[j];
            if(s%k==0)
                c++;
            //cout<<s<<" "<<c<<endl;
        }
    }
    cout<<c;
    return 0;
}


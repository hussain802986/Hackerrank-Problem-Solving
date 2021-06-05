#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int a,b,d,i,r;
    cin>>a>>b>>d;
    int c=0;
    for(i=a;i<=b;i++)
    {
        int t=i,rev=0;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        
        int ab=i-rev;
        ab=abs(ab);
        if(ab%d==0)
            c++;
        
    }
    cout<<c<<endl;
}


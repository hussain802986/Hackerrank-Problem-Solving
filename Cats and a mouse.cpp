#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {  
        int a,b,c;
        cin>>a>>b>>c;
        a=abs(a-c);
        b=abs(b-c);
        if(a==b)
            cout<<"Mouse C"<<endl;
        else if(a<b)
            cout<<"Cat A"<<endl;
        else
            cout<<"Cat B"<<endl;
    }
    return 0;
}


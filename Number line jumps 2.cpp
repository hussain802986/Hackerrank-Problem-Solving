#include<iostream>

using namespace std;

int main()
{
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    if(v1<v2)
    {
        while(x2<=x1)
        {
            if(x1==x2)
            {
                cout<<"YES";
                return 0;
            }
            x1+=v1;
            x2+=v2;
        }
    }
    if(v1>v2)
    {
        while(x1<=x2)
        {
            if(x1==x2)
            {
                cout<<"YES";
                    return 0;
            }
            x1+=v1;
            x2+=v2;
        }
    }
    if(v1==v2)
    {
        if(x1==x2)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}


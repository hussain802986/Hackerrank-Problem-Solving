#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch[n];
    cin>>ch;
    int i,val=0,track=0;
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]=='D')
            track--;
        else if(ch[i]=='U')
            track++;
        if(track==-1&&ch[i]=='D')
            val++;
    }
    cout<<val<<endl;
    return 0;
}


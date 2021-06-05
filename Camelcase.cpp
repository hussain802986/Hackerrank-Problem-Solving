#include<iostream>
#include<ctype.h>

using namespace std;

int main()
{
    int c=1;
    char ch[100000];
    cin>>ch;
   // cout<<ch;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(isupper(ch[i]))
            c++;
            //cout<<ch[i];
    }
    cout<<c<<endl;
    return 0;
}

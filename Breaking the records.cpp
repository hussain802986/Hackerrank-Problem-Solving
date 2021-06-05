
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int scores[n];
    for(int i=0;i<n;i++)
        cin>>scores[i];
    int cb=0,cw=0,max=0,min=0;
    max=min=scores[0];
    for(int i=1;i<n;i++)
    {
        if(scores[i]>max)
        {
            max=scores[i];
            cb++;
        }
        else if(scores[i]<min)
        {
            min=scores[i];
            cw++;
        }
    }
    cout<<cb<<" "<<cw<<endl;
    return 0;
        
    
}


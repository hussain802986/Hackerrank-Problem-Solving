#include<bits/stdc++.h>

using namespace std;

string getencrypted(string s, int k)
{
	k%=26;
	for(int i=0;i<s.size();i++)
	{
		if(isalpha(s[i]))
		{
			if(isupper(s[i]))
			{
				if(s[i]+k>'Z')
					s[i]-=26;
			}
			else
			{
				if(s[i]+k>'z')
					s[i]-=26;
			}
			s[i]+=k;
		}
	}
	return s;
}

int main()
{
	int n,k;
	cin>>n;
	string s;
	cin>>s;
	cin>>k;
	cout<<getencrypted(s,k);
	return 0;
}

#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) 
{
    int i;
    for(i=0;i<s.size();i++)
    {
        if(!isalpha(s[i]))
            cout<<s[i];
        else
        {        
            
            if(isupper(s[i]) && s[i]+k>'z')
                s[i]-=26;
            else if(islower(s[i]) && s[i]+k>'Z')
                s[i]-=26;
            s[i]+=k;
        }
    }
    return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}


#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int min=6-n;
    string specials = "!@#$%^&*()-+";
    if(n<6)
        return min;
    else
    {
        min =0;
        bool caps=0,small=0,digit=0,spl=0;
        for(int i=0;i<password.size();i++)
        {
            if(islower(password[i]))
                small=1;
            else if(isupper(password[i]))
                caps=1;
            else if(isdigit(password[i]))
                digit=1;
            else if(specials.find(password[i])!=string::npos)
                spl=1;
        }
        int ans=0;
            if(small) ans++;
            else if(caps) ans++;
            else if(digit) ans++;
            else if(spl) ans++;
            return ans;
    }
    //return 0;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}


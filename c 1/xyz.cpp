#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> s[i];
        }

        int h1 = stoi(s[0]);
        int h2 = stoi(s[1]);

        int hh = h1 * 10 + h2;
        string x;
        if (hh < 12)
        {
            x = "AM";
        }
        else
        {
            x = "PM";
        }
        hh %= 12;
        if (hh == 0)
        {
            cout << "12";

            for (int i = 2; i < 5; i++)
            {
                cout << s[i];
            }
        }

        else
        {
            if(hh<12)
        {
            cout << "0"<<hh;
            for (int i = 2; i < 5; i++)
            {
                cout << s[i];
            }
        }
        else{
             cout << hh;
            for (int i = 2; i < 5; i++)
            {
                cout << s[i];
            }
        }
           
        }
        cout << " " << x << endl;
    }
}
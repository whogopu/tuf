#include <bits/stdc++.h>

using namespace std;

void solvingFor(int n)
{
    cout << " --------- " << endl;
    cout << "Solving for: " << n << endl;
}

void solvingFor(string s)
{
    cout << " --------- " << endl;
    cout << "Solving for: " << s << endl;
}

void printPassedString(string s)
{
    cout << s;
}

void printUsingPointer(string s)
{
    char *p = &s[0];
    cout << "printing using pointer" << endl;

    while (*p != '\0')
    {
        /* code */
        cout << *p;
        p++;
    }
}

bool isPalindrom(string s, int n)
{
    int h = (n + 1) / 2 - 1;
    // cout << "n: " << n << "  h: " << h << endl;
    bool isSame = true;
    for (int i = 0; i <= h; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            isSame = false;
            break;
        }
    }

    return isSame;
}

void longestPalindromeBF(string s)
{
    int n = s.size();
    int maxPal = 0;
    string maxPalStr = "";

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int l = j - i + 1;
            string s1 = s.substr(i, l);
            bool isPal = isPalindrom(s1, l);

            if (isPal && l > maxPal)
            {
                maxPal = max(maxPal, l);
                maxPalStr = s1;
            }
            // cout << s1 << " is " << isPalindrom(s1, l) << endl;
        }
    }

    cout << "max len: " << maxPal << endl;
    cout << "max Pal str: " << maxPalStr << endl;
}

void longestPalindromeDP(string s)
{
    int l = s.size();
    cout << "Size of string is: " << l << endl;

    bool dp[4][4] = {false};
    string subS[4][4] = {""};


    // Pretty print the elements
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < l; ++j)
        {
            // Use setw to set the width of each element for better alignment
            cout << setw(5) << boolalpha << dp[i][j] << " ";
        }
        cout << endl;
    }

    // Pretty print the elements
    for (int i = 0; i < l; ++i)
    {
        for (int j = i; j < l; ++j)
        {
            subS[i][j] = s.substr(i, j - i + 1);
        }
    }

    // print subS
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < l; ++j)
        {
            // Use setw to set the width of each element for better alignment
            cout << setw(6) << subS[i][j] << " ";
        }
        cout << endl;
    }

    for (int lenSubS = 1; lenSubS <= l; lenSubS++)
    {
        for (int i = 0, j = lenSubS - 1; j < l; i++, j++)
        {
            if (lenSubS == 1)
            {
                if (i == j)
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            else if (lenSubS == 2)
            {
                if (s[i] == s[j])
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            else
            {
                if (s[i] == s[j] && dp[i + i][j - 1])
                {

                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }

            if (dp[i][j] == true)
            {
                cout << "pal: " << s.substr(i, j-i+1) << endl;
            }
        }
    }

    // Pretty print the elements
    for (int i = 0; i < l; ++i)
    {
        for (int j = 0; j < l; ++j)
        {
            // if (i == 1 && j == 2)
            // {
            //     cout << "cond1: ";
            // }
            // Use setw to set the width of each element for better alignment
            cout << setw(5) << boolalpha << dp[i][j] << " ";
        }
        cout << endl;
    }

    // cout << "[0][0]: a: -> " << s.substr(0,0-0+1) << endl;
    // cout << "[0][2]: abb: -> " << s.substr(0,2-0+1) << endl;
    // cout << "[0][3]: abbc: -> " << s.substr(0,3-0+1) << endl;
    // cout << "[2][3]: abbc: -> " << s.substr(2,3-2+1) << endl;
    // cout << "[1][2]: bb: -> " << s.substr(1,2-1+1) << endl;
}

int main()
{

    // string str("GeeksforGeeks");
    // string str2 = ("GeeksforGeeks");
    // string str3 = "GeeksforGeeks";
    // char s4[4] = "gfg";

    // cout << str << endl;
    // cout << str2 << endl;
    // cout << str3 << endl;
    // cout << s4 << endl;

    // string s5, s6, s7;

    // cin >> s5;
    // cout << "using cin -> s5 is: " << s5 << endl;

    // cin.ignore(); // to clear the newline character from the cin stream before using getline.

    // getline(cin, s6);
    // cout << "using getline -> s6 is: " << s6 << endl;

    // getline(cin, s7);
    // cout << "using getline -> s7 is: " << s7 << endl;

    // string s8 = "today is my day";
    // stringstream obj8(s8);

    // string t8;

    // while (obj8 >> t8)
    // {
    //     cout << t8 << " " ;
    // }

    // cout << endl;
    // printPassedString(s8);

    // cout << endl;
    // printUsingPointer(s8);

    int t, n;
    string s;
    cin >> t;

    while (t > 0)
    {
        cin >> s;
        solvingFor(s);

        // longestPalindromeBF(s);
        longestPalindromeDP(s);
        t--;
    }
}
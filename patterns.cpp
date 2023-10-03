#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    // cout << "Printing pattern of: " << r << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * n - (2 * i - 1)); j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = i - 1; j < n - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    for (int i = 1; i < 2 * n; i++)
    {
        int k = i;
        if (k > 5)
            k = 2 * n - i;
        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    int base = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(base + j) << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    int base = 65;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(base + j);
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    int base = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << char(base + i - 1);
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    int base = 65;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            int k = j;
            if (k > ((2 * i - 1) / 2) + 1)
                k = (2 * i - k);
            cout << char(base + k - 1);
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << "";
        }
        cout << endl;
    }
}

void pattern18(int n) {
    int base = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n-1; j >= n - i; j--)
        {
            cout << char(base + j) << " ";
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    for(int i = 1; i <= 2*n; i++) {
        if(i <= n) {
            for(int j = 1; j <= n-i + 1; j++) {
                cout << "*";
            }
            for(int j = 1; j <= 2* (i - 1); j++) {
                cout << " ";
            }
            for(int j = n-i+1; j >= 1; j--) {
                cout << "*";
            }
        } else {
            for(int j = 1; j <= i - n; j++ ) {
                cout << "*";
            }
            for(int j = 1; j <= 2* (2*n - i); j++) {
                cout << " ";
            }
            for(int j = 1; j <= i-n; j++) {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for(int i = 1; i <= 2*n-1; i++) {
        if(i <= n) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
            for(int j = i; j <= n-1; j++) {
                cout << "  ";
            }
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
        } else {
            for(int j = 1; j <= 2*n - i; j++ ) {
                cout << "*";
            }
            for(int j = 1; j <= i-n; j++) {
                cout << "  ";
            }
            for(int j = 1; j <= 2*n - i; j++ ) {
                cout << "*";
            }
            
        }
        // if(i <= 2*n) {
            cout << endl;
        // }
    }
}

void pattern21(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || j == 0 || i == n-1 || j == n-1)
                cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n) {
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int top = i;
            int right = 2*n - 1 - 1 - j;
            int bottom = 2*n - 1- 1 - i;
            int left = j;

            int num = min(min(top, right), min(bottom, left));
            cout << n-num << " ";
        }
        cout << endl;
    }
}

int main()
{
    int t, n;
    cin >> t;
    cout << "In main func: " << endl;

    while (t--)
    {
        cin >> n;
        // pattern1(n);
        // pattern2(n);
        // pattern3(n);
        // pattern4(n);
        // pattern5(n);
        // pattern6(n);
        // pattern7(n);
        // pattern8(n);
        // pattern9(n);
        // pattern10(n);
        // pattern11(n);
        // pattern12(n);
        // pattern13(n);
        // pattern14(n);
        // pattern15(n);
        // pattern16(n);
        // pattern17(n);
        // pattern18(n);
        // pattern19(n);
        // pattern20(n);
        // pattern21(n);
        pattern22(n);
    }

    return 0;
}
#include <bits/stdc++.h>;
using namespace std;

void solvingFor(int n)
{
    cout << "Solving for: " << n << endl;
}

int countDigits(int n)
{

    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    cout << count << endl;
}

long reverseNumber(int n)
{
    int count = 0;
    int rev = 0;

    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    cout << rev << endl;
    return rev;
}

bool checkPalindrome(int n)
{

    int rev = 0;
    int orig = n;

    while (n > 0)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }

    bool isSame = orig == rev;

    return isSame;
}

bool checkArmstrong(int n)
{

    int orig = n;
    int added = 0;

    int count = 0;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    n = orig;

    while (n > 0)
    {
        int r = n % 10;
        int pow = count;
        int toAdd = 1;
        while (pow--)
        {
            toAdd *= r;
        }
        added += toAdd;

        n = n / 10;
    }

    bool isSame = orig == added;

    // cout << orig << endl;
    // cout << added << endl;
    // cout << isSame << endl;

    return isSame;
}

int sumOfDivisors(int n)
{
    // Write your code here.
    int s = 0;

    for (int i = 1; i * i <= n; i++)
    {
        // cout << "check: i: " << i << endl;

        if (n % i == 0)
        {
            s += i;
            // cout << "diviser: i: " << i << endl;
            int o = n / i;
            if (o != i)
            {
                s += o;
                // cout << "diviser: o: " << o << endl;
            }
        }
    }
    // cout << s << endl;
    return s;
}

int sumOfAllDivisors(int n)
{
    // Write your code here.
    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        s += sumOfDivisors(i);
    }
    cout << s << endl;
    return s;
}

bool isPrime(int n)
{
    // Write your code here.
    if (n == 1)
        return false;
    if (n == 2)
        return true;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // cout << "not prime" << endl;
            return false;
        }
    }
    // cout << "prime" << endl;
    return true;
}

int calcGCD(int n, int m)
{
    // Write your code here.

    while (n != 0 && m != 0)
    {
        if (n < m)
        {
            m = m % n;
            if (m == 0)
            {
                cout << "GCD: n: " << n << endl;
                return n;
            }
        }
        else
        {
            n = n % m;
            if (n == 0)
            {
                cout << "GCD: m: " << m << endl;

                return m;
            }
        }
    }
}

int main()
{
    int t, n, m;

    cin >> t;

    while (t > 0)
    {
        cin >> n;

        solvingFor(n);
        // countDigits(n);
        // reverseNumber(n);
        // checkPalindrome(n);
        // checkArmstrong(n);
        // sumOfAllDivisors(n);
        // isPrime(n);

        cin >> m;
        calcGCD(n, m);
        t--;
    }

    return 0;
}
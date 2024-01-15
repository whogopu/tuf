#include <bits/stdc++.h>

using namespace std;

void solvingFor(int n)
{
    cout << "Solving for: " << n << endl;
}

vector<string> printNTimes(int n)
{
    // Write your code here.

    if (n < 1)
    {
        return {};
    }
    else
    {
        vector<string> result = printNTimes(n - 1);
        result.push_back("Coding Ninjas");
        return result;
    }
}

vector<int> printAscNos(int x)
{
    // Write Your Code Here
    // cout << x;

    if (x < 1)
    {
        // cout << "here";
        return {};
    }
    else
    {
        // cout << "there";

        vector<int> result = printAscNos(x - 1);
        result.push_back(x);
        return result;
    }
    // cout << x;
}

vector<int> printDscNos(int x)
{
    // Write Your Code Here
    // cout << x;

    if (x < 1)
    {
        // cout << "here";
        return {};
    }
    else
    {
        // cout << "there";

        vector<int> result = printDscNos(x - 1);
        result.insert(result.begin(), x);
        return result;
    }
    // cout << x;
}

long long sumFirstN(long long n)
{
    // Write your code here.
    if (n < 1)
        return 0;
    return n + sumFirstN(n - 1);
}

void calcFactLess(vector<long long> &result, long long i, long long fact, long long n)
{
    if (fact > n)
        return;
    result.push_back(fact);
    calcFactLess(result, i + 1, fact * i, n);
}

vector<long long> factorialNumbers(long long n)
{
    vector<long long> result = {};
    long long fact = 1;
    long long i = 2;
    calcFactLess(result, i, fact, n);
    return result;
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.

    // cout << "n: " << n << endl;

    if (n <= nums.size() / 2)
        return nums;

    int a = nums[n];
    int b = nums[nums.size() - n - 1];

    nums[n] = b;
    nums[nums.size() - n - 1] = a;

    reverseArray(n - 1, nums);

    return nums;
}

bool checkStrPalindrome(int n, string &str)
{
    if(str.size() < 2) return true;
    if(n < str.size()/2) 
        return true;
    
    bool isSame = str[str.size() - n - 1] == str[n];
    if(!isSame) return false;

    return isSame && checkStrPalindrome(n-1, str);

}

bool isPalindrome(string &str)
{
    // Write your code here.
    return checkStrPalindrome(str.size(), str);
}

int main()
{
    int t, n, m;
    string str;

    cin >> t;

    while (t > 0)
    {
        // cin >> n;

        // solvingFor(n);

        // -----------------------

        // vector<string> result = printNTimes(n);
        // for(string& s: result) {
        //     cout << s << endl;
        // }

        // -----------------------

        // vector<int> result = printAscNos(n);
        // for (int i : result)
        // {
        //     cout << i << endl;
        // }

        // -----------------------

        // vector<int> result = printDscNos(n);
        // for (int i : result)
        // {
        //     cout << i << endl;
        // }

        // ------- sum of fist N ---------

        // long long s = sumFirstN(n);
        // cout << s << endl;

        // ------- factorial till N ---------

        // vector<long long> result = factorialNumbers(n);
        // for (int i : result)
        // {
        //     cout << i << endl;
        // }

        // ------- reverse an array ---------

        // vector<int> result;
        // for (int i = 0; i < n; i++)
        // {
        //     int a;
        //     cin >> a;
        //     result.push_back(a);
        // }

        // reverseArray(n, result);
        // for (int i : result)
        // {
        //     cout << i << endl;
        // }

        // -------- palindrom string -------

        // cin >> str;
        // cout << isPalindrome(str);

        vector<int> nums = {1,2,3,4};

        nums.erase(nums.begin()+2);

        for (int i : nums)
        {
            cout << i << endl;
        }


        t--;
    }

    return 0;
}
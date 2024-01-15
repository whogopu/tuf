#include <bits/stdc++.h>;
using namespace std;

void solvingFor(int n)
{
    cout << " --------- " << endl;
    cout << "Solving for: " << n << endl;
}

void getCountSubarraysWithSumK(int n, vector<int> arr, int s)
{
    int total = 0;
    // cout << "Arr Size: " << n << endl;
    // cout << "Sum: " << s << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currSum = 0;
            for (int k = i; k <= j; k++)
            {
                currSum += arr[k];
            }

            // cout << "currSum: " << currSum << endl;

            if (currSum == s)
            {
                total++;
            }
        }
    }

    cout << "Total subarr: " << total << endl;
}

void getCountSubarraysWithSumKn2(int n, vector<int> arr, int s)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int cs = 0;
        for (int j = i; j < n; j++)
        {
            cs += arr[j];
            if (cs == s)
            {
                count++;
            }
        }
    }
    cout << "Total subarr: " << count << endl;
}

void getCountSubarraysWithSumKn(int n, vector<int> arr, int s)
{
    int count = 0;
    int cs = 0;

    for (int i = 0; i < n;)
    {
        cs += arr[i];
        if (cs < s)
        {
            i++;
            continue;
        } else if(cs == s) {
            count++;
            
        }
    }
    cout << "Total subarr: " << count << endl;
}

int main()
{
    int t, n;
    int s;
    cin >> t;

    while (t > 0)
    {
        cin >> n;
        cin >> s;

        solvingFor(n);

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }

        // cout << "the input arr: " << endl;

        // for (int a : arr)
        // {
        //     cout << a << " ";
        // }

        cout << endl;

        // getCountSubarraysWithSumK(n, arr, s); // O(n^3)
        // getCountSubarraysWithSumKn2(n, arr, s); // O(n^2)
        getCountSubarraysWithSumKn(n, arr, s); // O(n) -> variable sliding window

        cout << endl;

        t--;
    }

    return 0;
}
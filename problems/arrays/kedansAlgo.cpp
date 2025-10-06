#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maximumSubarray(vector<int> arr, int n)
{
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum = currSum + arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int kedansAlgo(vector<int> arr)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for (auto one : arr)
    {
        currSum += one;
        maxSum = max(maxSum, currSum);
        if (currSum < 0)
            currSum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {7, -15, 8, 7, 5, -1};
    int n = arr.size();
    // cout << maximumSubarray(arr, n);
    cout << kedansAlgo(arr);

    return 0;
}

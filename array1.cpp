#include <iostream>
using namespace std;
int count(int arr[], int n);
int sum(int arr[], int n);
void rev(int arr[], int n);
int minSum(int a[], int b[], int n);
int val(int arr[], int n);
int presuf(int arr[], int N);
int main()
{
    int n = 5, N = 7;
    int a[] = {5, 6, 10, 4, 9};
    int b[] = {1, 2, 3, 4, 5};
    int c[] = {0, 1, 2, 4, 5};
    int d[] = {1, 6, 5, 7, 10, 8, 9};
    int arr[] = {1, 2, 3, 4, 5};
    int odd = count(arr, n);
    int even = n - odd;
    int s = sum(arr, n);
    int min = minSum(a, b, n);
    int value = val(c, n);
    int ps = presuf(d, N);
    cout << odd << endl;
    cout << even << endl;
    cout << s << endl;
    rev(arr, n);
    cout << endl;
    cout << min << endl;
    cout << value << endl;
    cout << ps << endl;
    return 0;
}

int count(int arr[], int n)
{
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count_odd++;
        }
    }
    return count_odd;
}

int sum(int arr[], int n)
{
    int max_val = INT32_MIN;
    int min_val = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        max_val = max(max_val, arr[i]);
        min_val = min(min_val, arr[i]);
    }
    int ans = max_val + min_val;
    return ans;
}

void rev(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int minSum(int a[], int b[], int n)
{
    int minA = INT32_MAX, minB = INT32_MAX, indexA = 0, indexB = 0;
    int min2A = INT32_MAX, min2B = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < minA)
        {
            min2A = minA;
            minA = a[i];
            indexA = i;
        }
        else if (a[i] < min2A)
            min2A = a[i];
        if (b[i] < minB)
        {
            min2B = minB;
            minB = b[i];
            indexB = i;
        }
        else if (b[i] < min2B)
            min2B = b[i];
    }
    if (indexA != indexB)
        return minA + minB;
    return min(min2A + minB, min2B + minA);
}

int val(int arr[], int n)
{
    int missing = -1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int range_sum = (n) * (n + 1) / 2;
    missing = range_sum - sum;
    return missing;
}

int presuf(int arr[], int N)
{
    int prefix[N];
    int suffix[N];
    prefix[0] = INT32_MIN;
    suffix[N - 1] = INT32_MAX;
    for (int i = 0; i < N; i++)
    {
        prefix[i] = max(prefix[i], arr[i]);
    }
    for (int i = N - 1; i >= 0; i--)
    {
        suffix[i] = min(suffix[i], arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if (prefix[i] < arr[i] && arr[i] < suffix[i])
        {
            return arr[i];
        }
    }
    return -1;
}
#include <iostream>
using namespace std;

int main()
{
    int L = 1, R = 3, n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 1; i < n; i++)
    {
        arr[i] += arr[i - 1];
    }
    int ans = arr[R] - arr[L - 1];
    cout << ans << endl;

    return 0;
}
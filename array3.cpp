#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int height[] = {1, 2, 3, 4, 5};
    for (int i = 1; i < n; i++)
    {
        height[i] += height[i - 1];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, height[i]);
    }
    cout << ans << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 1, 1};
    int ans = 0;

    int height = 0;

    for (int i = 0; i < 7; i++)
    {

        height = height + arr[i];

        if (ans < height)

        {

            ans = height;
        }
    }
    cout << ans << endl;
    return 0;
}
//Something wrong happening here
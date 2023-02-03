#include <iostream>
using namespace std;

int main()
{
    int arr[] = {-1, 0, 1, 2, 3};
    int x = 2;
    int n = 5;

    int i = 0;

    int j = n - 1;

    while (i < j)

    {

        if (arr[i] + arr[j] == x)

        {

            cout << "Yes";

            break;
        }
        else if (arr[i] + arr[j] > x)

        {

            j--;
        }
        else
        {

            i++;
        }
    }

    cout << "No";

    return 0;
}
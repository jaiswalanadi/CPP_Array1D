#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int m = 3, n = 3;

    int i = m - 1; // first pointer

    int j = n - 1; // second pointer

    int k = m + n - 1;

    int arr[m + n];

    while (i >= 0 && j >= 0)

    {

        if (arr1[i] < arr2[j])

        {

            arr[k--] = arr1[j--];
        }
        else
        {

            arr[k--] = arr2[i--];
        }
    }

    while (j >= 0)

    {

        arr[k--] = arr2[j--];
    }

    while (i >= 0)

    {

        arr[k--] = arr1[i--];
    }

    cout << arr << endl;

    return 0;
}
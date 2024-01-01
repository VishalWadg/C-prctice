// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, ind, elem = 0;
//     cout << "Enter Size of the array : ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter elements  of the array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 ind = i;
//                 elem = arr[i];
//                 break;
//             }
//         }
//         if (elem != 0)
//         {
//             cout << "The First Repeating Element is : " << elem << endl;
//             cout << "Index of it's first occurance is : " << ind << endl;
//             break;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    if (minidx == INTMAX_MAX)
    {
        cout << "-1";
    }
    else
    {
        cout << "The index of 1st repeating element in the array is " << minidx;
    }

    return 0;
}
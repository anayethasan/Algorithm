#include <bits/stdc++.h>
using namespace std;

void conquer(int arr[], int l, int mid, int r)
{
    int n = mid - l + 1;
    int a[n];
    int k = l;
    for (int i = 0; i < n; i++)
    {
        a[i] = arr[k];
        k++;
    }
    int m = r - mid;
    int b[m];
    k = mid + 1;
    for (int i = 0; i < m; i++)
    {
        b[i] = arr[k];
        k++;
    }
    int i = 0, j = 0, curr = l;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            arr[curr] = a[i];
            i++;
            curr++;
        }
        else
        {
            arr[curr] = b[j];
            j++;
            curr++;
        }
    }

    while (i < n)
    {
        arr[curr] = a[i];
        i++;
        curr++;
    }
    while (j < m)
    {
        arr[curr] = b[j];
        j++;
        curr++;
    }
}

void divided(int arr[], int l, int r)
{
    if (l >= r)
        return;

    int mid = (l + r) / 2;
    divided(arr, l, mid);
    divided(arr, mid + 1, r);

    conquer(arr, l, mid, r);
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    divided(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
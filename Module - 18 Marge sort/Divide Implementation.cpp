#include<bits/stdc++.h>
using namespace std;

void divided(int arr[], int l, int r)
{
    if(l >= r)
        return;

    int mid = (l + r) / 2;
    divided(arr, mid, l);
    divided(arr, mid + 1, r);
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
    
    return 0;
}
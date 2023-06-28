#include <bits/stdc++.h>

int subarraysXor(vector<int> &a, int k)
{
    int n = a.size(); //size of the given array.
    int xr = 0;
    map<int, int> mpp; //declaring the map.
    mpp[xr]++; //setting the value of 0.
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        xr = xr ^ a[i];

        int x = xr ^ k;

        cnt += mpp[x];

        mpp[xr]++;
    }
    return cnt;
}
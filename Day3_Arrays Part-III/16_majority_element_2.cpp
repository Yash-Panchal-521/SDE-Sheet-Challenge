#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    unordered_map <int, int> mp;

    for(auto i: arr)
        mp[i]++;

    vector<int> ans;
    int n=arr.size();
    for(auto i: mp)
    {
        if(i.second > floor(n/3))
            ans.push_back(i.first);
    }

    return ans;

}
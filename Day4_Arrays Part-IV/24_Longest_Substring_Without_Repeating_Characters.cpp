#include <bits/stdc++.h> 


int uniqueSubstrings(string str)
{
    vector<int> mp(256,-1);
    int n = str.length();

    int l=0, r=0, ans=0;
    

    while(r<n)
    {
        if(mp[str[r]]!=-1)
            l = max(mp[str[r]]+1,l);
        
        mp[str[r]] = r;
        ans = max(ans, r-l+1);
        r++;
    }

    return ans;
}
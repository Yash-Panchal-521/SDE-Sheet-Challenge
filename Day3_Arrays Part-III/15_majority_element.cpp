#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {

	unordered_map<int, int> mp;

	for(int i=0; i<n; i++)
		mp[arr[i]]++;
	
	int curr=-1;
	for(auto i: mp)
	{
        if (i.second > floor(n / 2)) {
        	curr = i.first;
            break;
        }
    }

	return curr;
}
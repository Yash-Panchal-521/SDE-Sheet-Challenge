#include <bits/stdc++.h> 

vector<vector<int>> memo(16,vector<int> (16,-1));

int uniquePaths(int m, int n) {
	if(m==1 || n==1)
		return 1;
	if(memo[m][n]==-1)
		memo[m][n] = uniquePaths(m-1, n) + uniquePaths(m, n-1);
	return memo[m][n];  
}
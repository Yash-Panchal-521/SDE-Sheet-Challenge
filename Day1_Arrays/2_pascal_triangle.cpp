#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  if(n==0)
    return {};

  vector<vector<long long>> a;
  for(int i=0; i<n; i++)
  {
    vector<long long> temp(i+1);
    temp[0] = 1;
    temp[i] = 1;
    for(int j=1; j<i; j++)
      temp[j] = a[i-1][j-1] + a[i-1][j];
    a.push_back(temp);
  }

  return a;
}

int main()
{
    return 0;
}

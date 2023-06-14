#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    if(n==1)
        return permutation;
    int i=n-2;
    for(i; i>=0; i--)
    {
        if(permutation[i]<permutation[i+1])
            break;
    }
    if(i!=-1)
    {
        int j;
        for(j=n-1; j>i; j--)
            if(permutation[j]>permutation[i])
                break;
        swap(permutation[i], permutation[j]);
        reverse(permutation.begin()+i+1, permutation.end());
    }
    else
    {
        reverse(permutation.begin(), permutation.end());
    }
    return permutation;
}
int main()
{
    return 0;
}

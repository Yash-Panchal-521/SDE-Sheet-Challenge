#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &mat, int t, int b, int l, int r)
{
    int temp=mat[t][l];

    
    for(int i=l+1; i<=r; i++)
        std::swap(temp, mat[t][i]);

    for(int i=t+1; i<=b; i++)
        std::swap(temp, mat[i][r]);
    
    for(int i=r-1; i>=l; i--)
        std::swap(temp, mat[b][i]);
    
    for(int i=b-1; i>=t; i--)
        std::swap(temp, mat[i][l]);
    
}

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int top = 0,bottom = n-1;
    int left = 0, right = m-1;

    // if(n==1||m==1)
    //     return;

    while(top<bottom && left<right)
    {
        rotate(mat, top, bottom, left, right);
        top++;
        bottom--;
        left++;
        right--;
    }
}
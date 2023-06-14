#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int sum = 0;
    long long int max_so_far = INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum<0)
            sum = 0;
        if(sum>max_so_far)
            max_so_far = sum;
    }
    return max_so_far;
}
int main()
{
    return 0;
}

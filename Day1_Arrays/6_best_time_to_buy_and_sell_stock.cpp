#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    
    int max_pro = INT_MIN;
    int mini = INT_MAX;
    for(int i=0; i<prices.size(); i++)
    {
        mini = min(mini, prices[i]);
        max_pro = max(max_pro, prices[i]-mini);
    }

    return max_pro;
}
int main()
{
    return 0;
}

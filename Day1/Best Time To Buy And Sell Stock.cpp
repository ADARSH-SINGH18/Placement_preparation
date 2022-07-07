/*You are given an array of prices where prices[i] is the price of a given stock on an ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
// devnest , leetcode

int solve(int n, vector<int> prices){
    int min = INT_MAX , max=0;
    for(int i=0;i<n;i++){
        if(min>prices[i]) min=prices[i];
        if(max<prices[i]-min) max=prices[i]-min;
    }
    return max;
}

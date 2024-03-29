# Leetcode 121. Best Time to Buy and Sell Stock (C)
## Question 
You are given an array `prices` where `prices[i]` is the price of a given stock on the `$i^th$` day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return `0`.

## Example
* Example 1:
```html
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
```

* Example 2:
```html
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
```

### Contraints
* 1 <= prices.length <= $10^5$
* 0 <= prices[i] <= $10^4$

## Solve
* tip: greedy.
1. profit = current_price - min_price
2. if profit > max_profit, then max_profit = profit 

```c
int maxProfit(int* prices, int pricesSize){
    int min = 10001; //because max of prices[i] is 10000  
    int profit = 0;
    int maxprofit = 0;
    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];
        }
        profit = prices[i] - min;
        if (profit > maxprofit) {
            maxprofit = profit;
        }
    }
    return maxprofit;
}
```

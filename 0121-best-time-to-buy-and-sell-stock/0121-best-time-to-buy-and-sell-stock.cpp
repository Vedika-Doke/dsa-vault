class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        int min = prices[0];
        for(int i=0; i < n; i++){
            if(prices[i]<=min){
                min = prices[i];
            }

            int temp = prices[i] - min;
            if(profit<=temp){
                profit = temp;
            }
           // for(int j=i; j < n;j++){
            //    int temp = prices[j] - min;
            //    if(profit <= temp){
            //       profit = temp;
            //   }
            //}
        }
    return profit;
    }
};
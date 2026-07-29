class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int max = 0;
        for(int i = 0;i<prices.size()-1;i++){
            for(int j = i+1;j<prices.size();j++){
                profit = prices[j]-prices[i];
                if(profit>max){
                    max = profit;
                }
            }
        }
        return max;

    }
};

#include <climits>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maximumProfit = 0;
        for(int price : prices ){
            minPrice = min(minPrice,price);
            maximumProfit = max(maximumProfit,price-minPrice);
        }
        return maximumProfit;
        
        }
        
    
};

class Solution {
    public int maxProfit(int[] prices) {
        int profit = 0;
        int buy = prices[0];

        for (int i = 1; i < prices.length; i++) {
            // buy at lower rate
            if (prices[i] <= buy) {
                buy = prices[i];
                System.out.println("Baught");
                continue;
            } else if (buy < prices[i]) {
                profit += (prices[i] - buy);
                buy = prices[i];
                System.out.println("sold");
                System.out.println(profit);
            }

        }
        return profit;
    }
}
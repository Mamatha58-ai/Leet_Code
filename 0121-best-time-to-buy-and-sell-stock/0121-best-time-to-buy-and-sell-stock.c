int maxProfit(int* p, int n) {
    int min = p[0], max_profit = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] < min) {

            min = p[i];
        } else {
            int profit = p[i] - min;
            if (max_profit < profit) {
                max_profit = profit;
            }
        }
    }
    return max_profit;
}
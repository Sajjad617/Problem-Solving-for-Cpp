class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int re = numBottles;
        int div = numBottles;
        while(div != 0)
        {
            div = numBottles / numExchange;
            int mod = numBottles % numExchange;
            re += div;
            numBottles = div+mod;
        }
        return re;
    }
};
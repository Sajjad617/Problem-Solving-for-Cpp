class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int re = numBottles;
        while(numBottles >= numExchange)
        {
            numBottles = numBottles - numExchange + 1;
            numExchange++;
            re++;
        }
        return re;
        
    }
};
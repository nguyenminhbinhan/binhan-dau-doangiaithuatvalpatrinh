class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int tong = numBottles;
        int chai_rong = numBottles;
        
        while (chai_rong >= numExchange) {
            int doi_duoc = chai_rong / numExchange;
            tong += doi_duoc;
            chai_rong = doi_duoc + (chai_rong % numExchange);
        }
        
        return tong;
    }
};
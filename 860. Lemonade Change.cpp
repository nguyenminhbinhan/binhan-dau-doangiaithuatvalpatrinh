class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int nam = 0, muoi = 0;
        
        for (int b : bills) {
            if (b == 5) {
                nam++;
            } else if (b == 10) {
                if (nam == 0) return false;
                nam--;
                muoi++;
            } else { 
                if (muoi > 0 && nam > 0) {
                    muoi--;
                    nam--;
                } else if (nam >= 3) {
                    nam -= 3;
                } else {
                    return false;
                }
            }
        }
        
        return true;
    }
};
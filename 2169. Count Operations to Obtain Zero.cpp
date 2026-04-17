class Solution {
public:
    int countOperations(int num1, int num2) {
        int dem = 0;
        while (num1 > 0 && num2 > 0) {
            if (num1 >= num2) {
                dem += num1 / num2;   
                num1 %= num2;
            } else {
                dem += num2 / num1;
                num2 %= num1;
            }
        }
        return dem;
    }
};

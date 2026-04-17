class Solution {
public:
    int countEven(int num) {
        int dem = 0;
        for (int x = 1; x <= num; x++) {
            int tong = 0, tmp = x;
            while (tmp > 0) {
                tong += tmp % 10;
                tmp /= 10;
            }
            if (tong % 2 == 0) dem++;
        }
        return dem;
    }
};

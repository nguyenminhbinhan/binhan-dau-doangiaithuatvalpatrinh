class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ket_qua;
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                ket_qua.push_back("FizzBuzz");
            } else if (i % 3 == 0) {
                ket_qua.push_back("Fizz");
            } else if (i % 5 == 0) {
                ket_qua.push_back("Buzz");
            } else {
                ket_qua.push_back(to_string(i));
            }
        }
        return ket_qua;
    }
};
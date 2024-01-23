// task_4.cpp
#include <vector>

class Problem4 {
public:
    int superPow(int a, std::vector<int>& b) {
        int result = 1;
        for (int i = 0; i < b.size(); ++i) {
            result = powMod(result, 10) * powMod(a, b[i]) % 1337;
        }
        return result;
    }

private:
    int powMod(int a, int b) {
        int result = 1;
        a %= 1337;
        for (int i = 0; i < b; ++i) {
            result = (result * a) % 1337;
        }
        return result;
    }
};
// task_1.cpp
#include <vector>

class Problem1 {
public:
    int findTargetSumWays(std::vector<int>& nums, int target) {
        return calculate(nums, 0, target);
    }

private:
    int calculate(std::vector<int>& nums, int index, int target) {
        if (index == nums.size()) {
            return target == 0 ? 1 : 0;
        }
        int add = calculate(nums, index + 1, target - nums[index]);
        int subtract = calculate(nums, index + 1, target + nums[index]);
        return add + subtract;
    }
};
// task_2.cpp
#include <vector>
#include <numeric>

class Problem2 {
public:
    bool canPartition(std::vector<int>& nums) {
        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
        // If the total sum is odd, it cannot be partitioned into two equal subsets
        if (totalSum % 2 != 0) return false;

        int subsetSum = totalSum / 2;
        std::vector<bool> dp(subsetSum + 1, false);
        dp[0] = true; // There is always a subset with sum 0 (empty subset)

        for (int num : nums) {
            for (int i = subsetSum; i >= num; --i) {
                dp[i] = dp[i] || dp[i - num];
            }
        }

        return dp[subsetSum];
    }
};
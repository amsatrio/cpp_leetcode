#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

/* Brute Force
 *
 * Time complexity: O(n2).
 * Space complexity: O(1).
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (i == j) {
                    continue;
                }

                if (target - nums[i] == nums[j]) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};


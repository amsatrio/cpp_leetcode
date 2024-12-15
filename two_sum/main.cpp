#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
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

int main(){
    // get data
    int t;
    vector<vector<int>> vecs;
    vector<int> targets;
    cin >> t;
    for(int i = 0; i < t; i++){
        int size;
        cin >> size;

        vector<int> vec;
        for(int j = 0; j < size; j++){
            int value;
            cin >> value;
            vec.push_back(value);
        }

        int target;
        cin >> target;

        vecs.push_back(vec);
        targets.push_back(target);
    }

    // solution
    Solution s;
    for(int i = 0; i < t; i++){
        vector<int> result = s.twoSum(vecs[i], targets[i]);
        cout << result[0] << " " << result[1] << endl;
    }

    return 0;
}

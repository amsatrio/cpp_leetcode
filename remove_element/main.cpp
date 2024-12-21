class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        vector<int> index = {};
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val){
                k++;
            } else {
                index.push_back(i); // 0 3
            }
        }

        for(int i = index.size() - 1; i >= 0; i--){
            nums.erase(nums.begin() + index[i]);
        }

        return k;
    }
};

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        vector<int> temps = {};
        for(int i = 0; i < nums.size(); i++){

            bool is_equal = false;
            for(int j = 0; j < temps.size(); j++){
                if(nums[i] == temps[j]){
                    is_equal = true;
                    break;
                }
            }
            if(is_equal == false){
                temps.push_back(nums[i]);
            }
        }

        cout << temps.size();

        nums = temps;

        return temps.size();
        
    }
};

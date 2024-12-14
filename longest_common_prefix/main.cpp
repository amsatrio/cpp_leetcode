class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s0 = "";
        for (int i = 0; i < strs.size(); i++) {
            if (s0.length() == 0) {
                s0 = strs[i];
            }
            string s1 = strs[i];

            string t = "";
            for (int j = 0; j < s0.length(); j++) {
                if(j >= s1.length()){
                    break;
                }
                if (s0[j] == s1[j]) {
                    t = t + s0[j];
                } else {
                    break;
                }
            }
            s0 = t;

            if(t.length() == 0){
                return "";
            }
        }

        return s0;
    }
};

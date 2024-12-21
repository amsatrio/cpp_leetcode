class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() > haystack.length()){
            return -1;
        }
        int result = -1;
        
        for (int i = 0; i < haystack.length(); i++) {
            if(result > -1) {
                break;
            }
            if(haystack[i] == needle[0]){
                for(int j = 0; j < needle.length(); j++){
                    if(haystack[i + j] != needle[j]){
                        result = -1;
                        break;
                    }
                    result = i;
                }
            }

        }

        return result;
    }
};

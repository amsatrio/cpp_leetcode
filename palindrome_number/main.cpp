#include <cmath>
#include <cstdio>
#include <cstdlib>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        // return false if x is negative
        if(x < 0){
            return false;
        }

        // convert to string
        std::string a = std::to_string(x);
        std::string z(a);

        // reverse the order
        std::reverse(z.begin(), z.end());

        // return true if they are equal
        if(a == z){
            return true;
        }

        return false;
    }
};

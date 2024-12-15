#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int s_length = s.length();
        if (s_length == 0) {
            return false;
        }
        if (s_length % 2 == 1) {
            return false;
        }

        vector<int> vec_char;
        int arr_parentheses[6] = {};
        for (int i = 0; i < s_length; i++) {

            switch (s[i]) {
            case '(':
                arr_parentheses[0]++;
                break;
            case ')':
                arr_parentheses[1]++;
                break;
            case '[':
                arr_parentheses[2]++;
                break;
            case ']':
                arr_parentheses[3]++;
                break;
            case '{':
                arr_parentheses[4]++;
                break;
            case '}':
                arr_parentheses[5]++;
                break;
            default:
                arr_parentheses[0]++;
                break;
            }

            if (i < s_length - 1) {
                if (s[i] == '(') {
                    if (s[i + 1] == ']') {
                        return false;
                    }
                    if (s[i + 1] == '}') {
                        return false;
                    }
                }
                if (s[i] == '[') {
                    if (s[i + 1] == ')') {
                        return false;
                    }
                    if (s[i + 1] == '}') {
                        return false;
                    }
                }
                if (s[i] == '{') {
                    if (s[i + 1] == ')') {
                        return false;
                    }
                    if (s[i + 1] == ']') {
                        return false;
                    }
                }
            }

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                vec_char.push_back(i);
            }

            if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
                for (int j = vec_char.size()-1; j >= 0; j--) {
                    if (s[vec_char[j]] - s[i] == -1 ||
                        s[vec_char[j]] - s[i] == -2) {
                        if ((i - vec_char[j]) % 2 == 0) {
                            return false;
                        }
                        vec_char.erase(vec_char.begin() + j);
                        break;
                    }
                }
            }
        }

        if (arr_parentheses[0] != arr_parentheses[1] ||
            arr_parentheses[2] != arr_parentheses[3] ||
            arr_parentheses[4] != arr_parentheses[5]) {
            return false;
        }

        for (int i = 0; i < vec_char.size(); i++) {
            cout << vec_char[i] << " ";
        }

        if (vec_char.size() != 0) {
            return false;
        }

        return true;
    }
};

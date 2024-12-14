class Solution {
public:
    int romanToInt(string s) {
        int length = s.size();
        int r = 0;
        int temp = 0;
        for (int i = 0; i < length; i++) {
            switch (s[i]) {
            case 'M':
                if (temp == 100) {
                    r = r + 800;
                    temp = 1000;
                    break;
                }
                r = r + 1000;
                temp = 1000;
                break;
            case 'D':
                if (temp == 100) {
                    r = r + 300;
                    temp = 500;
                    break;
                }
                r = r + 500;
                temp = 500;
                break;
            case 'C':
                if (temp == 10) {
                    r = r + 80;
                    temp = 100;
                    break;
                }
                r = r + 100;
                temp = 100;
                break;
            case 'L':
                if (temp == 10) {
                    r = r + 30;
                    temp = 50;
                    break;
                }
                r = r + 50;
                temp = 50;
                break;
            case 'X':
                if (temp == 1) {
                    r = r + 8;
                    temp = 10;
                    break;
                }
                r = r + 10;
                temp = 10;
                break;
            case 'V':
                if (temp == 1) {
                    r = r + 3;
                    temp = 5;
                    break;
                }
                r = r + 5;
                temp = 5;
                break;
            default:
                r = r + 1;
                temp = 1;
            }
        }

        return r;
    }
};

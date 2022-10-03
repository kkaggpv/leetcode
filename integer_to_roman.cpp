
class Solution {
public:
    string intToRoman(int num) {
        vector<string> symbols{
            "M", 
            "CM", 
            "D", 
            "CD", 
            "C", 
            "XC", 
            "L", 
            "XL", 
            "X", 
            "IX", 
            "V", 
            "IV", 
            "I"
        };
        vector<int> values{
            1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
        };
        string roman = "";
        int mark = 0;
        while(num > 0) {
            while(num >= values[mark]) {
                roman += symbols[mark];
                num -= values[mark];
            }
            mark += 1;
        }
        return roman;
    }
};

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<string, int> roman = {
            {"I", 1},
            {"V", 5},
            {"X", 10},
            {"L", 50},
            {"C", 100},
            {"D", 500},
            {"M", 1000},
            {"IV", 4},
            {"IX", 9},
            {"XL", 40},
            {"XC", 90},
            {"CD", 400},
            {"CM", 900}
        };

        int total = 0;
        int i = 0;
        int n = s.size();

        while(i<n){
            if(i+1 < n){
                string twoChar = s.substr(i, 2);
                if(roman.count(twoChar)){
                    total += roman[twoChar];
                    i += 2;
                    continue;
                }
            }

            string oneChar = s.substr(i, 1);
            total += roman[oneChar];
            i += 1;
        }

        return total;
    }
};
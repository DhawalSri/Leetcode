class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        int charcount[26] = {0};

        for(int i=0; i<s.length(); i++){
            charcount[s.at(i) - 'a']++;
            charcount[t.at(i) - 'a']--;
        }

        for(int counts: charcount){
            if(counts > 0){
                return false;
            }
        }

        return true;

    }
};
class Solution {
public:
    bool vowels(char n){
        string k="aeiouAEIOU";
        for(int i=0; i<k.size(); i++){
            if(n==k[i]) return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            while (i < j && !vowels(s[i])) {
                i++;
            }

            while (i < j && !vowels(s[j])) {
                j--;
            }

            if (i < j) {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }

        return s;
    }
};

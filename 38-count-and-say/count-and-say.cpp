class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        if (n == 2) return "11";

        string s = "11";
        for (int i = 3; i <= n; i++) {
            string ns = "";
            int cnt = 1;
            for (int j = 1; j < s.size(); j++) {
                if (s[j] == s[j - 1]) {
                    cnt++;
                } else {
                    ns += to_string(cnt) + s[j - 1];
                    cnt = 1; // Reset the count
                }
            }
            ns += to_string(cnt) + s[s.size() - 1]; // For the last group
            s = ns; // Update s to the new string
        }
        return s;
    }
};
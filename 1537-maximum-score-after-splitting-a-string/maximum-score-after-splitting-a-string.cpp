class Solution {
public:
    int maxScore(const std::string& s) {
        int mx = 0;
        int zc = 0;
        int oc = count(s.begin(), s.end(), '1');

        for (int i = 0; i < s.size() - 1; ++i) {
            zc += (s[i] == '0');
            oc -= (s[i] == '1');
            mx = max(mx, zc + oc);
        }

        return mx;
    }
};

class Solution {
public:
  int minEatingSpeed(vector<int>& piles, int h) {
        auto feasible = [&](int speed) -> bool {
            int time = 0;
            for (int i : piles) {
                time += (i - 1) / speed + 1;
            }
            return time <= h;
        };

        int left = 1;
        int right = *max_element(piles.begin(), piles.end());

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (feasible(mid)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }
};
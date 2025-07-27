class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size(), count = 0;
        for (int i = 1; i < n - 1; ) {
            int left = i - 1;
            while (left >= 0 && nums[left] == nums[i]) left--;
            if (left < 0) { ++i; continue; }

            int right = i + 1;
            while (right < n && nums[right] == nums[i]) right++;
            if (right >= n) { ++i; continue; }

            if ((nums[i] > nums[left] && nums[i] > nums[right]) ||
                (nums[i] < nums[left] && nums[i] < nums[right])) {
                ++count;
                // skip all adjacent same numbers
                i = right;
            } else {
                ++i;
            }
        }
        return count;
    }
};
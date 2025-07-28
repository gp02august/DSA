class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         int p1 = m - 1;           // Pointer for nums1's meaningful elements
         int p2 = n - 1;           // Pointer for nums2
         int p = m + n - 1;        // Pointer for the merged array (nums1)

         while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }
        // (This handles cases where m = 0 or all elements in nums1 were smaller)
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};
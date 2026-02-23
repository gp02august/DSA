class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int> v;
        // 1. Combine arrays
        for(int x : nums1) v.push_back(x);
        for(int x : nums2) v.push_back(x);
        
        // 2. Sort
        sort(v.begin(), v.end());
        
        int m = v.size();
        if (m % 2 != 0) {
            // Odd: Return the middle element
            return v[m / 2];
        } else {
            // Even: Return the average of the two middle elements
            // We use 2.0 to force double precision division
            return (v[m / 2 - 1] + v[m / 2]) / 2.0;
        }
    }
};
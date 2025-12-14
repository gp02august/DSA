class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(begin(nums),end(nums));
        int i=0, j=nums.size()-1;
        int largest_sum = 0;
        int smallest_sum = 0;
        while(k>0){
            largest_sum +=nums[j--];
            smallest_sum +=nums[i++];
            k--;
        }
        return abs(largest_sum-smallest_sum);
    }
};
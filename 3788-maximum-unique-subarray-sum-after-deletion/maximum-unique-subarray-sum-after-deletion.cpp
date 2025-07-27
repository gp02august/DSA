class Solution {
public:
    // gyan_02
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        /*if(n<=1){
            return nums[0];
        }*/
        bool allNegative = true;
        unordered_set<int>un_od_set(nums.begin(), nums.end());
        int sum = INT_MIN;
        // for(auto &i:nums){
        //     un_od_set.insert(i);
        // }
        // int sum = 0;
        // for(auto& j:un_od_set){
        //     if(j>0)
        //         sum +=j;
        // }
        for(int i:nums){
            if(i>=0)
                allNegative=false;

            if(i>sum)
                 sum=i;
        }
        if(allNegative)
            return sum;

        int res = 0;
        for(int j:un_od_set){
            if(j > 0)
                res +=j;
        }
        return res;
    }
};
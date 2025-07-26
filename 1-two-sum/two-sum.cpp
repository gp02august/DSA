class Solution {
public:
// Gyanendra
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res_Vec;
        for(int i=0; i<nums.size(); i++){  // this is the brutforce approach...
            for(int j=i+1; j<nums.size(); j++){
                if((nums[i]+nums[j])==target){
                    res_Vec.push_back(i);
                    res_Vec.push_back(j);
                }
            }
        }
        return res_Vec;
    }
};
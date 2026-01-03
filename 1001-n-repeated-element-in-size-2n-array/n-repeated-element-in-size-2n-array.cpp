class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int res;
        for(auto i:mp){
            if(i.second>1){
                res= i.first;
            }
        }
        return res;
    }
};
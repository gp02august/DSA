class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        unordered_map<int, int>unique_freq;
        for(auto &i:mp){
            unique_freq[i.second]++;
        }
        for(int i:nums){
            if(unique_freq[mp[i]]==1)
                return i;
        }
        return -1;
    }
};
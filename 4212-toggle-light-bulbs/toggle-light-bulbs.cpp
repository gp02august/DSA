class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>res;
        unordered_map<int, int>mp;
        for(auto i:bulbs){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second%2!=0){
                res.push_back(i.first);
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};
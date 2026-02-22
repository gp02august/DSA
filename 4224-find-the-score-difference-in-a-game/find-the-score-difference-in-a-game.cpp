class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int first=0;int second=0;
        bool isfirst = true;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==1){
                isfirst = !isfirst;
            }
            if((i+1)%6==0){
                isfirst = !isfirst;
            }
            if(isfirst){
                first +=nums[i];
            }
            else{
                second +=nums[i];
            }
        }
        return first-second;
    }
};
class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end(), greater<int>());
        long long total_sum=0;
        int i=0;
        int cnt = min(k,mul-1);
        k=k-cnt;

        while(cnt--){
            total_sum +=(1LL*nums[i]*mul);
            i++; mul--; 
        }
        while(k>0){
            total_sum +=nums[i];
            i++; k--;
        }
        return total_sum;
    }
};
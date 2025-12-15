class Solution {
public:
    long long solve(vector<int>& prices, int i)
    {
        if(i == prices.size()) return 0;

        long long cnt=1; // inculde on that day.. i.e single day
        int j =i;
        while(j+1<prices.size() && prices[j]-prices[j+1]==1){
            cnt++;j++;
        }
        return cnt+solve(prices, i+1);
    }
    long long getDescentPeriods(vector<int>& prices) {
        //return solve(prices, 0); uing this approach give tl due to recursion Timme complexity is large...

        int n = prices.size();
        long long ans = 1;
        long long len = 1;
        for(int i =1; i<n; i++)
        {
            if(prices[i-1]-prices[i]==1){
                len++;
            }
            else
            {
                len = 1;
            }
            ans +=len;
        }
        return ans;
    }
};
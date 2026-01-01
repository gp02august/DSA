class Solution {
public:
    vector<vector<int>>res;
    void solve(vector<int>& temp, vector<int>& nums, vector<bool>& visited){
        int n = nums.size();
        if(temp.size()==n){
            res.push_back(temp);
            return;
        }
        for(int i=0; i<n; i++){
            if(visited[i])
                continue;

            visited[i]=true;
            temp.push_back(nums[i]);
            solve(temp, nums, visited);

            //Backtrack: unmark the current number and remove it from temp
            visited[i]=false;
            temp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        vector<bool>visited(n, false);
        solve(temp, nums, visited);
        return res;
    }
};
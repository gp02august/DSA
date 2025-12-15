class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size()<=2)
            return true;

        sort(begin(arr), end(arr));
        int common_diff = abs(arr[0]-arr[1]);
        for(int i=2; i<arr.size(); i++){
            if(abs(arr[i]-arr[i-1]) != common_diff)
            {
                return false;
            }
        }
        return true;
    }
};
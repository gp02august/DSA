class Solution {
public:
    bool isDigitorialPermutation(int n) {
        int m=n;
        vector<int>v={1,2,145,40585};
        string s=to_string(m);
        sort(s.begin(),s.end());
        for(int i:v){
            string t=to_string(i);

            if(t.length()!=s.length()) continue;

            sort(t.begin(), t.end());

            if(t==s){
                return true;
            }
        }
        return false;
    }
};
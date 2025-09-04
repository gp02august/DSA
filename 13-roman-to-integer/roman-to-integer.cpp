class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp={{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};

        int res = 0;

        for(int i=0; i<s.length(); i++){
            int currnt = mp[s[i]];
            int next = (i+1<s.length())?mp[s[i+1]]:0;

            if(currnt<next){
                res -=currnt;
            }
            else{
                res +=currnt;
            }
        }
        return res;
    }
};
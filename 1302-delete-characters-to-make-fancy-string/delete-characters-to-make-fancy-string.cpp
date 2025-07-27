class Solution {
public:
    string makeFancyString(string s) {
        string res;
     map<char,int>mp;
     int cnt =1; // intially one for first index of letter...
     res +=s[0];
     for(int i=1; i<s.length(); i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        mp[s[i]]=cnt;
        if(cnt<3){
            res +=s[i];
        }
     }
     return res;   
    }
};
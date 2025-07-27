class Solution {
public:
     long long solve(const string& s) {
        long long cntL = 0, cntLC = 0, cntLCT = 0;
        for (char ch : s) {
            if (ch == 'L') cntL++;
            else if (ch == 'C') cntLC += cntL;
            else if (ch == 'T') cntLCT += cntLC;
        }
        return cntLCT;
    }

    long long numOfSubsequences(string s) {
        int n = s.size();

        vector<long long> prefixL(n + 1, 0), prefixLC(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixL[i + 1] = prefixL[i] + (s[i] == 'L' ? 1 : 0);
            prefixLC[i + 1] = prefixLC[i];
            if (s[i] == 'C') prefixLC[i + 1] += prefixL[i + 1];
        }

        vector<long long> suffixT(n + 1, 0), suffixCT(n + 1, 0);
        int countT = 0;
        for (int i = n - 1; i >= 0; --i) {
            suffixT[i] = suffixT[i + 1] + (s[i] == 'T' ? 1 : 0);
            suffixCT[i] = suffixCT[i + 1];
            if (s[i] == 'C') suffixCT[i] += countT;
            if (s[i] == 'T') countT++;
        }

        long long base = solve(s);
        long long maxCount = base;

        for (int i = 0; i <= n; ++i) {
            long long countL = base + suffixCT[i];          // Insert 'L'
            long long countC = base + prefixL[i] * suffixT[i];  // Insert 'C'
            long long countT = base + prefixLC[i];          // Insert 'T'
            maxCount = max({maxCount, countL, countC, countT});
        }

        return maxCount;
    /*long long solve(const string& s){
        long long cntL=0, cntLC=0, cntLCT=0;
        for(char ch:s){
            if(ch == 'L'){
                cntL++;
            }
            else if(ch=='C'){
                cntLC += cntL;
            }
            else if(ch == 'T'){
                cntLCT += cntLC;
            }
        }
        return cntLCT;
    }
    long long numOfSubsequences(string s) {
        long long maxCount =0;

        for(int i=0; i<=s.length(); i++){
            for(char ch:{'L','C','T'}){
                string newstr = s.substr(0,i)+ch+s.substr(i);
                long long cnt = solve(newstr);
                maxCount = max(maxCount, cnt);
            }
        }
        return maxCount;*/
    }
};
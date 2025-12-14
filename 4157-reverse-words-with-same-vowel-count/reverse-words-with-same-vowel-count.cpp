class Solution {
public:
    bool isVowel(char ch){
        return ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }
    string reverseWords(string s) {
        string temp = s;
        int n=temp.length();
        int i=0;

        int vowelCnt = 0;
        while(i<n && temp[i] != ' '){
            if(isVowel(temp[i]))
                vowelCnt++;
            i++;
        }

        string res;
        res +=temp.substr(0,i);
        while(i<n){
            int start = i;
            int vowelCount =  0;
            while(i<n && temp[i] != ' '){
                if(isVowel(temp[i]))
                    vowelCount++;
                i++;
            }

            string word = temp.substr(start, i-start);

            if(vowelCnt==vowelCount){
                reverse(word.begin(), word.end());
            }
            res +=word;
            if(i<n){
                res +=" ";
                i++;
            }
        }
        return res;
    }
};
class Solution {
public:
    long long sumAndMultiply(int n) {
        string s= to_string(n);
        string st;
        for(int i=0; i<s.length(); i++){
            if(s[i] != '0'){
                st +=s[i];
            }
        }
        if(st.empty())
        {
            return 0;
        }
        
        int x = stoi(st);
        int temp = x;
        long long sum=0;
        while(x != 0){
            int rem = x%10;
            sum +=rem;
            x /=10;
        }
        return temp*sum;
    }
};
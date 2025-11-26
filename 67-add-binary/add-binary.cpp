class Solution {
public:
    //Brut force approach.....
    // long long decimal_form(long long &j){
    //     int i=0; long long ans=0;
    //     while(j != 0){
    //         int rem = j%10;
    //         if(rem ==1){
    //             // ans +=pow(2,i);
    //             ans +=(1<<i);
    //         }
    //         j = j/10; i++;
    //     }
    //     return ans;
    // }
    // long long binary_form(long long &s){
    //     int i=0; long ans=0;
    //     while(s != 0){
    //         int bit = s&1;
    //         ans +=bit*(long long)pow(10,i);
    //         s=s>>1; i++; 
    //     }
    //     return ans;
    // }
    string addBinary(string a, string b) {
        // long long n = stoll(a);  long long m = stoll(b);
        // long long k = decimal_form(n) + decimal_form(m);
        // long long l = binary_form(k);
        // string ans = to_string(l);
        // return ans;
        int i = a.length()-1; int j=b.length()-1;
        int carry = 0; string res = "";

        while(i>=0 || j>=0 || carry){
            int sum = carry;
            if(i>=0){
                sum +=a[i]-'0';
                i--;
            }
            if(j>=0){
                sum +=b[j]-'0';
                j--;
            }
            res +=char(sum%2+'0');
            carry = sum/2;
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
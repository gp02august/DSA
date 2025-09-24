class Solution {
public:
    int gcd(int even_sum, int odd_sum){
        int ans=0;
        if(odd_sum>even_sum){
            swap(even_sum, odd_sum);
        }
        while(odd_sum != 0){
            int rem = even_sum % odd_sum;
            even_sum = odd_sum;
            odd_sum = rem;
        }
        return even_sum;
    }
    int gcdOfOddEvenSums(int n) {
        int even_sum=0; int odd_sum=0;
        for(int i=1; i<=n; i++){
             odd_sum += (2 * i - 1); // for odd...
        }
        for(int i=1; i<=n; i++){
            even_sum +=2*i;
        }
        int res = gcd(even_sum, odd_sum);
        return res;
    }
};
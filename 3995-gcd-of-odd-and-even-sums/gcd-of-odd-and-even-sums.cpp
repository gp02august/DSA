class Solution {
public:
    int solve(int even_sum, int odd_sum){
        vector<int>v; vector<int>vc;
        for(int i=1; i<=even_sum; i++){
            if(even_sum%i==0){
                v.push_back(i);

                if(even_sum/i != i){
                    v.push_back(even_sum/i);
                }
            }
        }
        for(int i=1; i<=odd_sum; i++){
            if(odd_sum%i==0){
                vc.push_back(i);

                if(odd_sum/i != i){
                    vc.push_back(odd_sum/i);
                }
            }
        }
        sort(v.begin(), v.end());
        sort(vc.begin(), vc.end());
        vector<int>s;
        int i=0, j=0;
        while(i<v.size()-1 && j<vc.size()-1){
            if(v[i]==vc[j])
            {
                s.push_back(v[i]);
                i++; j++;
            }
            else if(v[i]>vc[j]){
                j++;
            }
            else{
                i++;
            }
        }
        int fact=INT_MIN;
        for(int k=0; k<s.size(); k++){
            fact = max(fact, s[k]);
        }
        return fact;
    }
    int gcdOfOddEvenSums(int n) {
        if(n==1)
            return 1;
            
        int even_sum=0, odd_sum=0;
        for(int i=0; i<n;i++){
            even_sum +=2*i+2;
            odd_sum +=2*i+1;
        }
        return solve(even_sum, odd_sum);
    }
};
class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int>v;
        int fact =1;
        for(int i=1; i<=n; i++){
            v.push_back(i);
            if(i<n){
                fact *=i;
            }
        }
        k--;
        string res="";
        while(true){
            int indx = k/fact;
            res +=to_string(v[indx]);
            v.erase(v.begin()+indx);
            if(v.empty()){
                break;
            }
            k %=fact;
            fact /=v.size();
        }
        return res;
    }
};
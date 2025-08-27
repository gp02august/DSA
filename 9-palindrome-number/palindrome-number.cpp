class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0)
            return false;

        int temp = x; long sum =0;
        while(x != 0){
            int rem;
            rem = x%10;
            sum =sum*10+rem;
            x /=10;
        }
        return sum==temp;

    //     string res = to_string(x);
    //    string temp =  res;
    //    reverse(temp.begin(), temp.end());
    //    int x1=stoi(temp);

    //    return x== x1;
    }
};
class Solution {
public:
    int pivotInteger(int n) {
        //sum of 1 to x is equal to sum of x to n;
        // i.e is s(x)=(s(n)-s(x-1)) +x(it self number);

        int sum_of_num = (n*(n+1))/2;
        int pivot = sqrt(sum_of_num);
        if(pivot*pivot==sum_of_num)
            return pivot;
        return -1;
    }
};
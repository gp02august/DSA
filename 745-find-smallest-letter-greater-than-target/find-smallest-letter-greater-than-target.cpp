class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        /*for(int i=0; i<letters.size(); i++){
            if(letters[i]>target)
            {
                return letters[i];
            }
        }
        return letters[0];*/ //using this logic we solve in time complexity of O(n);

        //Now here we can solve this question using binary search algorithm....

        int left=0; int end=letters.size()-1;
        while(left<=end){
            int mid = left+(end-left)/2;
            if(letters[mid]<=target){
                left=mid+1;
            }
            else{
                end =mid-1;
            }
        }
        if(left == letters.size())
        {
            return letters[0];
        }
        return letters[left];
    }
};
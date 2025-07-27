class Solution {
public:
    int removeUsingStack(string& s, char first, char second, int points) {
        stack<char> st;
        int score = 0;

        for (char c : s) {
            if (!st.empty() && st.top() == first && c == second) {
                st.pop();       // Remove the pair
                score += points;
            } else {
                st.push(c);
            }
        }

        // Reconstruct the remaining string
        s = "";
        while (!st.empty()) {
            s += st.top();
            st.pop();
        }
        reverse(s.begin(), s.end()); // Because stack reverses order

        return score;
    }
    int maximumGain(string s, int x, int y) {
        int total_sum = 0;

        // Prioritize the higher-point pair
        if (x >= y) {
            total_sum += removeUsingStack(s, 'a', 'b', x); // remove "ab"
            total_sum += removeUsingStack(s, 'b', 'a', y); // remove "ba"
        } else {
            total_sum += removeUsingStack(s, 'b', 'a', y); // remove "ba"
            total_sum += removeUsingStack(s, 'a', 'b', x); // remove "ab"
        }

        return total_sum;
        
    }
};
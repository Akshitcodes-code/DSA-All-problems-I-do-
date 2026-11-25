class Solution {
public:
    vector<char> reverseString(vector<char>& s) {
    
        rev(s, 0, s.size() - 1);
        return s;
    }

    void rev(vector<char>& s, int left, int right) {
        if (left >= right) {
            return;
        }

        swap(s[left], s[right]);
        

        rev(s, left + 1, right - 1);
    }
};

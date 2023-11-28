class Solution {
public:
    bool isPalindrome(string s) {
    
    // Strip non-alphanum chars and convert all to lower
    for(int i = 0; i < s.length(); i++) {
        if(!isalnum(s[i])) {
            s.erase(i,1);
            i--;
        } 
    }
    int left = 0;
    int right = s.length() - 1;
    while(left < right) {
        if(!isalnum(s[left])) {
            s.erase(left,1);
            continue;
        }
        if(!isalnum(s[right])) {
            s.erase(right,1);
            continue;
        }
        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
    }
};

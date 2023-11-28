class Solution {
public:
    bool isAnagram(string s, string t) {
        // Time Complexity is O(nlogn)
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s == t) {
            return true;
        } else {
            return false;
        }
    }
    // Above code works for ASCII strings
    // Unicode handling can be done using locale
    /*
		std::locale loc("");
  		std::sort(str1.begin(), str1.end(), loc);
  		std::sort(str2.begin(), str2.end(), loc);
	*/
};

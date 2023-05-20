class Solution {
public:
    bool isPalindrome(int x) {

        string str=to_string(x);
        string str1="";

        for(int i=str.length();i>=0;i--) str1+=str[i];
        str1.erase(str1.begin());

        if( str1==str) return true;
        return false;

        
        
    }
};

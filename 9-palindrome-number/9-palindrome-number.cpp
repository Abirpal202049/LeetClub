class Solution {
public:
    bool isPalindrome(int x) {
        int n, digit;
        long long rev = 0;
        n = x;
        while (x != 0)
        {
            digit = x % 10;
            rev = (rev * 10) + digit;
            x = x / 10;
        }
        if(n >= 0 && n == rev){
            return true;
        }else{
            return false;
        }
    }
};
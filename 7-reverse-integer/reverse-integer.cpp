#define ll long long
class Solution {
public:
    int reverse(int x) {
        int sign = 1 ;

        if(x < 0) sign = -1 ;

        ll v = (ll) abs(x * 1LL) ;

        long long rev = 0 ;

        while(v > 0) {
            rev = rev * 10 + v % 10 ;
            v /= 10 ;
            rev = rev * sign ;
            if(rev > INT_MAX || rev < INT_MIN) return 0 ;
            rev = rev * sign ;
        }

        rev = sign * rev ;

        if(rev > INT_MAX || rev < INT_MIN) return 0 ;

        return rev ;
    }
};
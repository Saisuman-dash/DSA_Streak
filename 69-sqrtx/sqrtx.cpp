using ll = long long ;
class Solution {
public:
    int mySqrt(int x) {
        ll low = 1 , high = x ;
        while(low <= high) {
            ll mid = low + (high - low) / 2 ;
            ll sq = mid * mid ;
            if(sq == x) {
                return mid ;
            } else if (sq > x) {
                high = mid - 1 ;
            } else {
                low = mid + 1 ;
            }
        }
        return (int)high ;
    }
};
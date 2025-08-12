using ll = long long ;
class Solution {
private:
    bool has(ll t , ll c) {
        ll low = 0 , high = c ;
        while(low <= high) {
            ll mid = low + (high - low) / 2 ;
            ll sq = mid * mid ;
            if(sq == t) return true ;
            else if(sq > t) high = mid - 1 ;
            else low = mid + 1 ;
        }
        return false ;
    }
public:
    bool judgeSquareSum(int c) {
        for(ll i = 0 ; i * i <= c ; i++) {
            ll req = c - i * i ;
            if(has(req , c)) {
                return true ;
            }
        }
        return false ;
    }
};
using ll = long long ;
class Solution {
private:
    int Sqrt(int x) {
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
        return static_cast<int>(high) ;
    }
public:
    bool isPerfectSquare(int num) {
        int v = Sqrt(num) ;
        return v * v == num ;
    }
};
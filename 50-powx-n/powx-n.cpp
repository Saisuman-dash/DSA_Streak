class Solution {
private:
    double power(double x, int n) {
        if(n == 0) return 1 ;
        double half = power(x , n / 2) ;

        if(n & 1) return x * half * half ;

        return half * half ;
    }
public:
    double myPow(double x, int n) {
        double val = power(x , n) ;
        if(n < 0) return 1.0 / val ;
        return val ;
    }
};
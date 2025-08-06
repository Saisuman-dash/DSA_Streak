class Solution {
public:
    int mySqrt(int x) {
        int p;
        if(x==0 || x==1)return x;
        for(long long i=1;i<=x;i++)
    {
        if(i*i==x)
        {
           return i;
           break;
        }
        if(i*i>x)
        {
           return i-1;
           break;
        }
    }
    return -1;
    }
};
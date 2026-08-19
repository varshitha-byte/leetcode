class Solution {
public:
    double myPow(double x, long long n) {
        long long N=n;
        if(N<0){
            N=-N;
            x=1/x;
        }

        if(N==0){
            return 1;
        }

        double half = myPow(x,N/2);
        if(N%2==0){
            return half*half;
        }else{
            return half*half*x;
        }
    }
};
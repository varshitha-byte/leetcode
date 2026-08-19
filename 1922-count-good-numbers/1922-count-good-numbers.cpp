class Solution {
public:

    long long pow(long long n,long long x){
        long long ans=1;
        long long mod=1000000007;
        while(n>0){
            if(n%2==1){
                ans=(ans*x)%mod;
            }
            x=(x*x)%mod;
            n=n/2;
        }
        return ans;
    }

    int countGoodNumbers(long long n) {
        long long ans=1;
        long long mod=1000000007;
        if(n%2==1){
            ans=(ans * pow((n+1)/2,5))%mod;
            ans=(ans* pow(n/2,4))%mod;
            return ans;
        }else{
            ans=(ans * pow(n/2,5))%mod;
            ans=(ans* pow(n/2,4))%mod;
            return ans;
        }
    }
};
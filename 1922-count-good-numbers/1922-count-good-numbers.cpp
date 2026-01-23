class Solution {
public:

int mod = 1e9 + 7;
long long binpow(long long a,long long b){
    if(b==0){
        return 1;
    }
    if(b%2==1){
        return (a*binpow(a,b-1))%mod;
    }
    else{
        long long temp = binpow(a,b/2);
        return (temp * temp)%mod;
    }
}
        
    int countGoodNumbers(long long n) {
       long long ans;

       if(n%2==0){
         ans = (binpow(5,n/2)*binpow(4,n/2))%mod;
       }
       else{
        ans =  (binpow(5,n/2+1)*binpow(4,n/2))%mod;
       }
    return ans;
    }
};
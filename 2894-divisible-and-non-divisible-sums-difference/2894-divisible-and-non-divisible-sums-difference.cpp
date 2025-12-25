class Solution {
public:
    int differenceOfSums(int n, int m) {
    // int num1=0;
    // int num2=0;
    // for(int i=1;i<=n;i++){
    //       if(i%m!=0){
    //         num1 += i;
    //       }
    //       else{
    //         num2 += i;
    //       }
    // }
    // int ans = num1 - num2;
    // return ans;
    int total = n *(n+1)/2;
    int divisibleSum = m *(n/m) * (n/m+1);
    return total-divisibleSum;
    }
};
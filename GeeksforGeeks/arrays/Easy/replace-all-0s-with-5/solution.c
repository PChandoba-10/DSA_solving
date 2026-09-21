class Solution {
  public:
    int convertFive(int n) {
        // code here
        int power = 1;
        int num = 0;
        if (n==0){
            num = 5;
        }
        while(n>0){
            int digit = n%10;
            if (digit == 0){
                digit=5;
            }
            num += digit * power;
            power *= 10;
            n = n/10;
        }
        return num;
    }
};
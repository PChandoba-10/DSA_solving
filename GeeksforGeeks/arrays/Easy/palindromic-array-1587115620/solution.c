class Solution {
    public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        
        for (int i = 0 ; i<arr.size(); i++) {
            int original = arr[i];
            int n = arr[i];
            int rev = 0;
            
            while (n>0) {
                int digit = n%10;
                rev = rev*10 + digit;
                n = n/10;
            }
            if (original != rev) {
                return false;
            }
        }
        return true;
    }
    
};

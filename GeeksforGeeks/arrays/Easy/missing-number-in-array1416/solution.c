class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n = arr.size()+1;
        
        int expResult =( n * 1LL* (n+1))/2;
        int actual_result ;
        
        for(int i = 0 ; i < n-1 ;i++){
            actual_result +=arr[i];
        }
        
        int x = expResult - actual_result;
        return x;
    }
};
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        vector<int>vec;
        
        for(int i = arr.size()-1 ;i>=0;i--){
           vec.push_back(arr[i]);
        }
        arr= vec;
    }
};
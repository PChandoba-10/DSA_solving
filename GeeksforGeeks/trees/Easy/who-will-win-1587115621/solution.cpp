class Solution {
    public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        // int start = arr[0];
        // int end = arr[arr.size()-1];
        
        // int mid = start +(end - start)/2;
        
        for (int i = 0; i<arr.size(); i++) {
            
            if (arr[i] == k) {
                return true;
            } 
        }
        return false;
    }
};

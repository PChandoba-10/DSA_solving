class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int size = arr.size();
        int max = -1;
        int min = -1;
        
        for(int i = 0 ; i<size ; i++){
            if(arr[i] > max){
                min = max;
                max = arr[i];
            }
            if(arr[i] < max && arr[i] > min){
                min = arr[i];
            }
        }
        return min;
    }
};
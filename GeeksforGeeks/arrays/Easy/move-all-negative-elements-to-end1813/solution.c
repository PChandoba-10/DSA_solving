class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int>vec1;
        vector<int>vec2;
        
        for(int i =0 ;i<arr.size();i++){
            if(arr[i] < 0){
                vec2.push_back(arr[i]);
            }else{
                vec1.push_back(arr[i]);
            }
        }
        vec1.insert(vec1.end() ,vec2.begin() , vec2.end());
        arr= vec1;
    }
};
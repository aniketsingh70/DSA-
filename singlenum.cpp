class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single =0;
        for(int element : nums){
            single ^=element;
        }
        return single;
        
    }
};

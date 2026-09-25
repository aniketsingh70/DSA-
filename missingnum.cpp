class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int missing = 0;
        int arr_sum = 0;
        for(int element : nums){
            arr_sum += element;

        }
        missing = sum - arr_sum;
        return missing;
        
    }
};

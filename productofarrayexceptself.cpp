class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> ans;
        int product = 1;
        int zeroCount=0;
        for(int x: nums){
            if(x==0){
                zeroCount++;
                continue;
            }
            product*=x;
        }
        for(int x: nums){
            if(x==0){
                ans.push_back(product);
            }
            else if(zeroCount==1){
                ans.push_back(0);
            }
            else{
                ans.push_back(product/x);
            }
        }
        return ans;
    }
};

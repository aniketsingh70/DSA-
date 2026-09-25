class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans ;
        unordered_set <int> s ;
        for(int x : nums1){
            s.insert(x);
        }
        for(int y : nums2){
            if(s.find(y)!=s.end()){
                ans.push_back(y);
                s.erase(y);
            }
        }
        return ans;

        
    }
};

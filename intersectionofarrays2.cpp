class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans ;
        unordered_map <int,int> m;
        for(int x : nums1){
            m[x]++;
        }
        for(int y : nums2){
            if(m[y]>0){
                ans.push_back(y);
                m[y]--;
            }
        }

        return ans;
    }
};

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        unordered_set<int>r(nums1.begin(),nums1.end());
        vector<int>a;
        for(int j=0;j<n;j++)
        {
            if(r.count(nums2[j]))
            {
                a.push_back(nums2[j]);
                r.erase(nums2[j]);
            }
        }
        return a;
    }
};
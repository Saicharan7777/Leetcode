class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>b;
        for(int j=0;j<nums2.size();j++)
        {
            if(find(nums1.begin(),nums1.end(),nums2[j])!=nums1.end())
            {
                if(find(b.begin(),b.end(),nums2[j])==b.end())b.push_back(nums2[j]);
            }
        }
        return b;
    }
};
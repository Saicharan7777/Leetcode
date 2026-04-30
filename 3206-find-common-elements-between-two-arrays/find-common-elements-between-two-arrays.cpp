class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        int f1[101]={0},f2[101]={0};

        for(int i=0;i<n;i++)
        {
            f1[nums1[i]]=1;
        }

        for(int i=0;i<m;i++)
        {
            f2[nums2[i]]=1;
        }

        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(f2[nums1[i]]==1)c1++;
        }

         for(int i=0;i<m;i++)
        {
            if(f1[nums2[i]]==1)c2++;
        }

        return {c1,c2};
    }
};
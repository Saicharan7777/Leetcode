class Solution {
public:
    void m(vector<int>&a, int l, int m, int h)
    {
        vector<int> b;
        int i=l,j=m+1;
        while(i<=m&&j<=h)
        {
            if(a[i]<=a[j])
            {
                b.push_back(a[i++]);
            }
            else
            {
                b.push_back(a[j++]);
            }
        }
        while(i<=m)
        {
            b.push_back(a[i++]);
        }
        while(j<=h)
        {
            b.push_back(a[j++]);
        }
        for(int k=0;k<b.size();k++)
        {
            a[l+k]=b[k];
        }
    }

    void ms(vector<int>&a, int l,int h)
    {
        if(l<h)
        {
            int mid=(l+h)/2;
            ms(a,l,mid);
            ms(a,mid+1,h);
            m(a,l,mid,h);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        ms(nums,0,nums.size()-1);
        return nums;
    }
};
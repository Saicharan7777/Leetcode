class Solution {
public:
    void MergeSort(vector<int> & a, int l, int m, int h)
    {
        vector<int> b;
        int i = l, j = m + 1;
        while(i <= m && j <= h)
        {
            if(a[i] <= a[j])
            {
                b.push_back(a[i++]);
            }
            else 
            {
                b.push_back(a[j++]);
            }
        }

        while(i <= m)
        {
            b.push_back(a[i++]);
        }

        while(j <= h)
        {
            b.push_back(a[j++]);
        }

        int n1 = b.size();
        for(int k = 0; k < n1; k++)
        {
            a[l + k] = b[k];
        }
    }

    void Merge(vector<int> & a, int l, int h)
    {
        if(l < h)
        {
            int mid = (l + h) / 2;
            Merge(a, l, mid);
            Merge(a, mid + 1, h);
            MergeSort(a, l, mid, h);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        Merge(nums, 0, n - 1);

        return  nums;
    }
};
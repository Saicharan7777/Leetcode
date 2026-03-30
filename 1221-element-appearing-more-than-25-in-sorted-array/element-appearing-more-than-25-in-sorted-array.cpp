class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int b=n/4,c=1,v=1;

        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])c++;
            else
            {
                if(c>b)
                {
                    return arr[i];
                }
                c=1;
            }
        }

        if(c>b)return arr[n-1];
        return v;
        
    }
};
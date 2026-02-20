class Solution {
public:
static bool compare(string a, string b)
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        vector<string>r;
        for(int i=0;i<n;i++)
        {
            r.push_back(to_string(nums[i]));
        }
        sort(r.begin(),r.end(),compare);
        string  v="";
        for(int i=0;i<n;i++)
        {
            v+=r[i];
        }
        if(v[0]=='0')return "0";
        
        return v;
    }
};
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
                
        int n=nums.size();
        if(n==0)return {};
        int v=nums[0],e=0;
        bool m=false; 
        vector<string> r;

        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1]+1)
            {
                e=nums[i];
                m=true;
                continue;
                
            }
            else
            {
                if(m)
                {
                    string a=to_string(v);
                    string b=to_string(e);
                    string s=a+"->"+b;
                    r.push_back(s);
                }
                else
                {
                    string a=to_string(v);
                    r.push_back(a);
                }
                v=nums[i];
                e=0;
                m=false;
            }
        }

                if(m)
                {
                    string a=to_string(v);
                    string b=to_string(e);
                    string s=a+"->"+b;
                    r.push_back(s);
                }
                else
                {
                    string a=to_string(v);
                    r.push_back(a);
                }
                
        return r;   
    }
};

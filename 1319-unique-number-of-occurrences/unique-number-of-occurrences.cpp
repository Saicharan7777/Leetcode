class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        int r[2001]={0};
        for(int i=0;i<n;i++)
        {
            r[arr[i]+1000]++;
        }

        unordered_set<int>s;
        for(int i=0;i<2001;i++)
        {
            if(r[i]>0){
            if(s.count(r[i]))return false;
            s.insert(r[i]);
            }
        }
        return true;
    }
};
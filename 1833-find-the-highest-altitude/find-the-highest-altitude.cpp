class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int s=0;
        int m=0;
        for(int i=0;i<n;i++)
        {
            s+=gain[i];
            m=max(m,s);
        }
        return m;
    }
};
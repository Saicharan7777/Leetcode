class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n=mountain.size();
        vector<int>r;
        for(int i=1;i<n-1;i++)
        {
           if(mountain[i]>mountain[i-1]&&mountain[i]>mountain[i+1])r.push_back(i);
        }
        return r;
    }
};
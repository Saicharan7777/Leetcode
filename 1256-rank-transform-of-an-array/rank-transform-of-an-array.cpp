class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> a(arr.begin(), arr.end());

        unordered_map<int,int> r;

        sort(arr.begin(), arr.end());
         
         int rank = 1;
        for(int i = 0; i < n; i++)
        {
            if(r.find(arr[i]) == r.end())
            {
              r[arr[i]] = rank;
              rank += 1;
            }
        }


        for(int i = 0; i < n; i++)
        {
            a[i] = r[a[i]]; 
        }

        return a;
    }
};
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> r(nums.begin(), nums.end());

        int m = *max_element(nums.begin(), nums.end()); 
        int n = *min_element(nums.begin(), nums.end());

        vector<int> a;
        for(int i = n; i <= m; i++)
        {
            if(!r.count(i))
            {
                a.push_back(i);
            }
        }
        return a;
    }
};
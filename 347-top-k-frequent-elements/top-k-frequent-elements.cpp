class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> a;

        for(int i : nums)
        {
            a[i]++;
        }

        priority_queue<pair<int,int>> r;
        for(auto i : a)
        {
            r.push({i.second, i.first});
        }

        vector<int> b;

        while(k--)
        {
            b.push_back(r.top().second);
            r.pop();
        }

        return b;
    }
};
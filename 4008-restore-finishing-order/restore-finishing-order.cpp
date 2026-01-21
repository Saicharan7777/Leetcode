class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int>r;
        vector<int>a;
        for(int i=0;i<friends.size();i++)
        {
            r[friends[i]]++;
        }

        for(int i=0;i<order.size();i++)
        {
            if(r[order[i]]==1)a.push_back(order[i]);
        }

        return a;
    }
};
class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int s=INT_MAX;
        for(int i=0;i<tasks.size();i++)
        {
            int a=tasks[i][0];
            int b=tasks[i][1];
            s=min(s,(a+b));   
        }
        return s;
    }
};
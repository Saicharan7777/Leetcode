class Solution {
public:
    int minOperations(vector<string>& logs) {
        int c=0,n=logs.size();
        for(int i=0;i<n;i++)
        {
            if(logs[i]=="../")
            {
                if(c>0)c--;
            }
            else if(logs[i]!="./")c++;
        }
        return c;
    }
};
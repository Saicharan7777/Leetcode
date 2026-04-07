class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();

        int c=0,v=0;
        for(int i=0;i<n;i++)
        {
            if(moves[i]=='U')c--;
            else if(moves[i]=='D')c++;
            else if(moves[i]=='L')v--;
            else v++;
        }
       return c==0&&v==0;
    }
};
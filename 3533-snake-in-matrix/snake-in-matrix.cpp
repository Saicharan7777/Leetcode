class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int r=0,c=0;
        int s=commands.size();
        for(int i=0;i<s;i++)
        {
            if(commands[i]=="UP")r--;
            else if(commands[i]=="DOWN")r++;
            else if(commands[i]=="LEFT")c--;
            else if(commands[i]=="RIGHT")c++;
        }

        return r*n+c;
    }
};
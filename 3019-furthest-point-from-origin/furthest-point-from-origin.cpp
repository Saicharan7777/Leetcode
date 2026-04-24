class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
      int n=moves.size(),c=0,l=0,u=0;
      for(int i=0;i<n;i++)
      {
        if(moves[i]=='L')l++;
        else if(moves[i]=='R')c++;
        else u++;
      }
      return abs(l-c)+u;
    }
};
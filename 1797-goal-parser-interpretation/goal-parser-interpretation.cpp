class Solution {
public:
    string interpret(string command) {
        int n=command.size();

        string v;
        for(int i=0;i<n;i++)
        {
             if(command[i]>='A'&&command[i]<='z')
            {
                v+=command[i];
            }
            else if(command[i]=='('&&command[i+1]==')')
            {
                v+='o';
            }
           
        }
        return v;
    }
};
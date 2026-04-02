class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>v;
        for(int i=0;i<operations.size();i++)
        {
           
            if(operations[i]=="+"&&v.size()>=2)
            {
                int a=v.top();
                int c=v.top();
                v.pop();
                int b=v.top();
                v.push(c);
                v.push(a+b);
            }
            else if(operations[i]=="D")
            {
                v.push(v.top()*2);
            }
            else if(operations[i]=="C")
            {
                v.pop();
            }
            else
            {
                v.push(stoi(operations[i]));
            }
        }
        int main=0;
        while(!v.empty())
        {
            main+=v.top();
            v.pop();
        }  
        return main;
    }
};
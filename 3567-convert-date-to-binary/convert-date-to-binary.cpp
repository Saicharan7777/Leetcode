class Solution {
public:
     string convert(int n)
     {
        string s="";
        while(n>0)
        {
            s=char((n%2)+'0')+s;
            n/=2;
        }
        return s;
     }
    string convertDateToBinary(string date) {
        int y=stoi(date.substr(0,4));
        int m=stoi(date.substr(5,2));
        int d=stoi(date.substr(8,2));

        return convert(y)+"-"+convert(m)+"-"+convert(d);
    }
};
class Solution {
public:
    bool scoreBalance(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=s[i]-'a'+1;
        }
        int l=0;
        for(int i=0;i<n;i++){
            l+=s[i]-'a'+1;
            int r=sum-l;
            if(l==r)return true;
        }
        return false;
    }
};
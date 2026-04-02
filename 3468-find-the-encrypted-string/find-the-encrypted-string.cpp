class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
        k%=n;
        string r=s;
        for (int i=0;i<n;i++){
            r[i]=s[(i+k)%n];
        }
        return r;
    }
};
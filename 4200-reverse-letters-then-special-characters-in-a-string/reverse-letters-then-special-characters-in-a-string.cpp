class Solution {
public:
void Letters(string &v){
      int n=v.size();
      int i=0,j=n-1;
        while(i<=j)
        {
            
           while(i<=j&&!isalpha(v[i]))
            {
                i++;
            }
           while(i<=j&&!isalpha(v[j]))
            {
                j--;
            }
            if(isalpha(v[i])&&isalpha(v[j]))
            {
                swap(v[i],v[j]);
                i++;
                j--;
            }
        }
    }

    void SpecialCharacters(string &h)
    {
        int n=h.size();
        int k=0,l=n-1;
        while(k<=l)
        {

            while(k<=l&&isalpha(h[k]))
            {
                k++;
            }
            while(k<=l&&isalpha(h[l]))
            {
                l--;
            }
             if(!isalpha(h[k])&&!isalpha(h[l]))
            {
                swap(h[k],h[l]);
                k++;
                l--;
            }
        }
    }
    string reverseByType(string s) {
      Letters(s);
      SpecialCharacters(s);
    return s;
    }
};
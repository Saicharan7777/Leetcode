class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int s=0,v=0;
        int i=0,o=0,j=1;
        while(i<n&&o<n)
        {
            if(j%2==0)
            {
                s+=j;
                i++;
            }
            else
            {
                v+=j;
                o++;
            }
            j++;
        }

        int max1 = max(v, s);
        int min1 = min(v, s);

        while(min1 != 0)
        {
            int temp = min1;
            min1 = max1 % min1;
            max1 = temp;
        }

        return max1;
    }
};
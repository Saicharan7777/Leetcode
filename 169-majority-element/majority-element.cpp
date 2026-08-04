class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, element = 0;

        for(int val : nums)
        {
            if(count == 0)
            {
                element = val;
                count++;
            }
            else if(element == val)
            {
                count++;
            }
            else
            {
                count--;
            }
        }

        return element;
    }
};
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1 = 0, count2 = 0, element1 = 0, element2 = 0;
        int n = nums.size() / 3;
        for(int i : nums) {
            if(count1 == 0 && i != element2) {
                element1 = i;
                count1++;
            }
            else if(count2 == 0 && i != element1) {
                element2 = i;
                count2++;
            } 
            else if(i == element1) {
                count1++;
            }
            else if(i == element2) {
                count2++;
            }
            else {
                count1--;
                count2--;
            }
        }


        vector<int> a;
        count1 = 0, count2 = 0;
        for(int i : nums) {
            if(i == element1) {
               count1++;
            }
            else if(i == element2) {
               count2++;
            }
        }
        if(count1 > n) {
            a.push_back(element1);
        }
        if(count2 > n) {
            a.push_back(element2);
        }
        return a;
    }
};
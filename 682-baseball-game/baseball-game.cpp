class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> ans;
        int result = 0;
        for(string i : operations) {
            if(i == "+") {
                int first = ans.top();
                ans.pop();
                int second = ans.top();
                int sum = first + second;
                ans.push(first);
                ans.push(sum);
                result += ans.top();
            }
            else if(i == "D") {
                int value = ans.top();
                ans.push(value * 2);
                result += ans.top();
            }
            else if(i == "C") {
                result -= ans.top();
                ans.pop();
            }
            else {
                int num = stoi(i);
                ans.push(num);
                result += num;
            }
        }
        return result; 
    }
};
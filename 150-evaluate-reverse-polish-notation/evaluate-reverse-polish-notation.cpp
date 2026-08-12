class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> r;

        int sum = 0;
        for(string i : tokens) {
            if(i == "+") {
                int first = r.top();
                r.pop();
                int second = r.top();   
                r.pop();  
                sum = (first + second);
                r.push(sum);
                sum = 0;
            }
            else if(i == "-") {
                int first = r.top(); 
                r.pop();
                int second = r.top();   
                r.pop();  
                sum = (second - first);
                r.push(sum);
                sum = 0;
            }
            else if(i == "*") {
                int first = r.top(); 
                r.pop();
                int second = r.top();   
                r.pop();  
                sum = (first * second);
                r.push(sum);
                sum = 0;
            }
            else if(i == "/") {
                int first = r.top();
                r.pop();
                int second = r.top();   
                r.pop();  
                sum = (second / first);
                r.push(sum);
                sum = 0;
            }
            else {
                r.push(stoi(i));
            }
        }
        return r.top();
    }
};
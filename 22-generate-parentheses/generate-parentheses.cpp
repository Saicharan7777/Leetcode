class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        queue<pair<string, pair<int, int>>> q;

        q.push({"", {0, 0}});

        while(!q.empty()) {
            pair<string, pair<int, int>> current_node = q.front();
            q.pop();

            string current = current_node.first;
            int first = current_node.second.first;
            int second = current_node.second.second;

            if(current.length() == 2 * n) {
                res.push_back(current);
                continue;
            }

            if(first < n) {
                q.push({current + "(", {first + 1, second}});
            }   
            if(second < first) {
                q.push({current + ")", {first, second + 1}});
            }
        }

        return res;        
    }
};
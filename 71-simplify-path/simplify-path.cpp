class Solution {
public:
    string simplifyPath(string path) {
        vector<string> s;
        stringstream ss(path);
        string compare;

        while(getline(ss, compare, '/')) {
            if(compare == "" || compare == ".") {
                continue;
            }

            if(compare == "..") {
                if(!s.empty()) {
                    s.pop_back();
                }
            }
            else {
                s.push_back(compare);
            }
        }

        string final = "";
        for(int i = 0; i < s.size(); i++) {
            final += "/" + s[i];
        }
        return final.empty() ? "/" : final;
    }
};
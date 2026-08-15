class Solution {
public:
    string decodeString(string s) {
        vector<char> a;

        for(char i : s) {
            if(i != ']') {
                a.push_back(i);
            }
            else {
                string str = "";
                while(!a.empty() && a.back() != '[') {
                    str = a.back() + str;
                    a.pop_back();
                }
                a.pop_back();

                string str2 = "";
                while(!a.empty() && isdigit(a.back())) {
                    str2 = a.back() + str2;
                    a.pop_back();
                }

                int value = stoi(str2);

                while(value--) {
                    for(char i : str) {
                        a.push_back(i);
                    }
                }

            }
        }
        return string(a.begin(), a.end());
    }
};
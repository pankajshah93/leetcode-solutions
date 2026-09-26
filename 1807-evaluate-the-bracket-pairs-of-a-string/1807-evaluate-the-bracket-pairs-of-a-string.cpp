class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> mp;

        // Store knowledge in hashmap
        for (auto &x : knowledge) {
            mp[x[0]] = x[1];
        }

        string ans;
        string key;
        bool inside = false;

        for (char ch : s) {
            if (ch == '(') {
                inside = true;
                key = "";
            }
            else if (ch == ')') {
                inside = false;

                if (mp.count(key))
                    ans += mp[key];
                else
                    ans += "?";
            }
            else {
                if (inside)
                    key += ch;
                else
                    ans += ch;
            }
        }

        return ans;
    }
};
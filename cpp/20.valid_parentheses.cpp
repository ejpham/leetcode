#include <string>
#include <vector>
class Solution {
public:
    bool isValid(std::string s) {
        std::vector<char> st;
        for (auto i : s) {
            if (i == '(' || i == '{' || i == '[') st.push_back(i);
            else {
                if (st.empty() || (st.back() == '(' && i != ')') || (st.back() == '[' && i != ']') || (st.back() == '{' && i != '}')) return false;
                st.pop_back();
            }
        }
        return st.empty();
    }
};
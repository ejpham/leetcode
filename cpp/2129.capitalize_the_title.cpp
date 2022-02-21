#include <string>
class Solution {
public:
    std::string capitalizeTitle(std::string title) {
        int i = 0;
        while (i < title.length()) {
            int j = i;
            while (i < title.length() && title[i] != ' ') {
                title[i] = tolower(title[i]);
                i++;
            }
            if (i - j > 2)
                title[j] = toupper(title[j]);
            
            i++;
        }
        return title;
    }
};
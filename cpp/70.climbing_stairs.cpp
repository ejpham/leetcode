#include <map>
class Solution {
public:
    std::map<int, int> map;
    int climbStairs(int n) {
        auto i = map.find(n);
        if (i != map.end()) return map[n];
        if (n == 1) return 1;
        if (n == 2) return 2;
        map[n] = climbStairs(n - 2) + climbStairs(n - 1);
        return map[n];
    }
};
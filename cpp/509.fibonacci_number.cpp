#include <map>
class Solution {
public:
    std::map<int, int> map;
    int fib(int n) {
        auto i = map.find(n);
        if (i != map.end()) return map[n];
        if (n == 0) return 0;
        if (n <= 2) return 1;
        map[n] = fib(n - 1) + fib(n - 2);
        return map[n];
    }
};
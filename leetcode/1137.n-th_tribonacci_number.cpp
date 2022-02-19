#include <map>
using namespace std;
class Solution
{
public:
    map<int, int> map;
    int tribonacci(int n) {
        auto i = map.find(n);
        if (i != map.end()) return map[n];
        if (n == 0) return 0;
        if (n <= 2) return 1;
        map[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
        return map[n];
    }
};
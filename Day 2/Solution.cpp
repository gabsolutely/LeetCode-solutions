#include <numeric>
#include <string>
using namespace std;
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        int gcdLength = gcd((int)str1.size(), (int)str2.size());
        return str1.substr(0, gcdLength);
    }
};
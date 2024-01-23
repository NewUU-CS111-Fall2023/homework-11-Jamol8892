// task_5.cpp
#include <string>
#include <unordered_map>

class Problem5 {
public:
    std::string decodeMessage(std::string key, std::string message) {
        std::unordered_map<char, char> cipherMap;
        char currentSubstitute = 'a';
        for (char ch : key) {
            if (ch != ' ' && cipherMap.find(ch) == cipherMap.end()) {
                cipherMap[ch] = currentSubstitute++;
            }
        }

        std::string decoded;
        for (char ch : message) {
            if (ch == ' ') {
                decoded += ' ';
            } else {
                decoded += cipherMap[ch];
            }
        }

        return decoded;
    }
};
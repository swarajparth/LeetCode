class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i = word.find_first_of(ch);

        string initialString = word.substr(0, i+1);
        reverse(initialString.begin(), initialString.end());
        
        return initialString + word.substr(i+1);
    }
};
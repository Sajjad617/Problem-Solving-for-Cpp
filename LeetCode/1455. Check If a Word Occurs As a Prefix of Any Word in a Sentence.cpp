class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        istringstream words(sentence); 
        string word;
        int cnt = 1;
        while (words >> word) { 
            if (word.find(searchWord) == 0) { 
                return cnt;
            }
            cnt++;
        }
        return -1;
    }
};
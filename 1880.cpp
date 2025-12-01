lass Solution {
public:
    int getNumericValue(const string &word) {
        int result = 0;
        for (char c : word) {
            result = result * 10 + (c - 'a');
        }
        return result;
    }

    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int num1 = getNumericValue(firstWord);
        int num2 = getNumericValue(secondWord);
        int target = getNumericValue(targetWord);
        return (num1 + num2 == target);
    }
};

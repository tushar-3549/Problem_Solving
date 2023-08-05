class Solution {
public:
    void generateCombinations(string digits, vector<string>& res, string num[], int i, string s) {
        if (i == digits.length()) {
            res.push_back(s);
        } else {
            string val = num[digits[i] - '0'];
            for (int j = 0; j < val.size(); j++) {
                generateCombinations(digits, res, num, i + 1, s + val[j]);
            }
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.empty()) {
            return res;
        }
        string num[10] = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        generateCombinations(digits, res, num, 0, "");
        return res;
    }
};

/*
int main() {
    Solution sol;
    string digits1 = "23";
    vector<string> result1 = sol.letterCombinations(digits1);
    // Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

    string digits2 = "";
    vector<string> result2 = sol.letterCombinations(digits2);
    // Output: []

    string digits3 = "2";
    vector<string> result3 = sol.letterCombinations(digits3);
    // Output: ["a","b","c"]

    return 0;
}
*/

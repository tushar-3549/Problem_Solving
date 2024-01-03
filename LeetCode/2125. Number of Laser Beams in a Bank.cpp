class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prevRowCount = 0;
        int total = 0;

        for (const std::string& row : bank) {
            int curRowCount = cal(row);
            if (curRowCount == 0)
                continue;

            total += curRowCount * prevRowCount;
            prevRowCount = curRowCount;
        }
        return total;
    }

    private:
    int cal(const std::string& s){
        int count = 0;
        for (char c : s)
            count += c - '0';

        return count;
    }
};

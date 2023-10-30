class Solution {
public:
     static int countSetBits(int num) {
        int count = 0;
        while (num) {
            count += num & 1;
            num >>= 1;
        }
        return count;
    }
    static bool customComparator(int a, int b) {
        int countA = countSetBits(a);
        int countB = countSetBits(b);

        if (countA == countB) {
            return a < b;
        }

        return countA < countB;
    }

    vector<int> sortByBits(vector<int>& arr) {
         std::sort(arr.begin(), arr.end(), customComparator);
         return arr;
    }
};

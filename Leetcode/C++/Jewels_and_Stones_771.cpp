class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map <char, int> cnt;
            for(char char1 : S){
                cnt[char1]++;
            }
        int sum = 0;
        for(char char2: J){
            sum+= cnt[char2];
        }
        return sum;
    }
};

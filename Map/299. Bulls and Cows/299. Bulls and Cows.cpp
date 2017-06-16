class Solution {
public:
    string getHint(string secret, string guess) {
        vector<int> map(10, 0);
        int bulls = 0, cows = 0;
        for(int i = 0; i < secret.size(); ++i) {
            if(secret[i] == guess[i]) ++bulls;
            else {
                if(map[secret[i] - '0'] < 0 ) ++cows;
                ++map[secret[i] - '0'];
                if(map[guess[i] - '0'] > 0) ++cows;
                    --map[guess[i] - '0'];
            }
        }
        return to_string(bulls) + 'A' + to_string(cows) + 'B';
    }
};

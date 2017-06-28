class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int aIndex = 0, bIndex = 0;
        while (1) {
            if(a[aIndex] == '+' && b[bIndex] == '+') break;
            if(a[aIndex] != '+') ++aIndex;
            if(b[bIndex] != '+') ++bIndex;
        }
        int a1 = stoi(a.substr(0, aIndex)), a2 = stoi(a.substr(aIndex+1, a.size() - aIndex - 2)),
        b1 = stoi(b.substr(0, bIndex)), b2 = stoi(b.substr(bIndex+1, b.size() - bIndex - 2));
        return to_string(a1*b1 - a2*b2) + '+' + to_string(a1*b2+a2*b1) + 'i';
    }
};
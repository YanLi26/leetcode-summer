class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        set<vector<int>>res;
        map<string,int> wordMap;
        set<int> wordSize;
        for(int i = 0; i < words.size(); ++i) {
            wordMap[words[i]] = i;
            wordSize.insert(words[i].size());
        }
        for (int i = 0; i < words.size(); ++i) {
            for(auto it = wordSize.begin(); *it <= words[i].size() && it != wordSize.end(); ++it) {
                int sizeOne = *it, sizeTwo = words[i].size() - *it, tagOne = 0, tagTwo = 0;
                string tmp, reverseTmp;
                if(sizeTwo != 0) {
                    tmp = words[i].substr(sizeOne);
                    reverseTmp = tmp;
                    reverse(tmp.begin(), tmp.end());
                    if(tmp != reverseTmp) tagOne = -1;
                    tmp = words[i].substr(0, sizeTwo);
                    reverseTmp = tmp;
                    reverse(tmp.begin(), tmp.end());
                    if(tmp != reverseTmp) tagTwo = -1;
                }
                if(tagOne != -1) {
                    tmp = words[i].substr(0, sizeOne);
                    reverse(tmp.begin(), tmp.end());
                    if(wordMap.find(tmp) != wordMap.end() && i != wordMap[tmp])
                        res.insert({i, wordMap[tmp]});
                }
                if(tagTwo != -1) {
                    tmp = words[i].substr(sizeTwo, *it);
                    reverse(tmp.begin(), tmp.end());
                    if(wordMap.find(tmp) != wordMap.end() && i != wordMap[tmp])
                        res.insert({wordMap[tmp], i});
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};
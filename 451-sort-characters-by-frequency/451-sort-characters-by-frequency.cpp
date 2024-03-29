class Solution {
public:
    string frequencySort(string s) {
unordered_map<char, int> mp;
        priority_queue<pair<int, char> > pq;
        for(char c: s) mp[c]++;
        for(auto i: mp){
            pq.push({i.second, i.first});
        }
        string st="";
        while(!pq.empty()){
            st+=string(pq.top().first, pq.top().second);
            pq.pop();
        }
        return st;
            
    }
};
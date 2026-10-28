class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char, int> minFreq;
        for(char ch = 'a'; ch <= 'z'; ch++){
            minFreq[ch] = 1000;
            // init all char value ( freq ) as 1000
        }

        for(auto word : words){
            unordered_map<char, int> freq;
            for(auto ch : word){
                freq[ch]++;
            }

            for(char ch = 'a'; ch <= 'z'; ch++){
                minFreq[ch] = min( minFreq[ch], freq[ch]);
            }
        }

        vector<string> ans;
        for(char ch = 'a'; ch <= 'z'; ch++){
            while( minFreq[ch] > 0){
                ans.push_back(string(1, ch)); // 1 is contructor( how many char want in string )
                minFreq[ch]--;
            }
        }

        return ans;



    }
};
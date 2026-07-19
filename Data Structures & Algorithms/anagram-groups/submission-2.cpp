class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Creating hash map to store grp of anagrams
        unordered_map<string, vector<string>> grps;

        // Iterate to each word in the list
        for(auto &word : strs){
            // Create An Array with 26 size to store letter counts
            int freq[26] = {0};

            // Iterating to each letter in the word
            for(char ch: word){
                freq[ch-'a']++; // Incrementing frequency of each letter in the word
            }

            // Creating a key based on the frequency array
            string key;
            for(int i=0;i<26;i++){
                key+='#'; // Separator to make key distinct  
                key += to_string(freq[i]); // Append freq of each char to the key
            }

            // Grp words with same freq
            grps[key].push_back(word);
        }

        vector<vector<string>> res;
        for(auto &p: grps){
            res.push_back(move(p.second));
        }
        return res;
    }
};
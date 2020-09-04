/*
Date: 09/04/2020
Author: jiachongliu
Title: 249. Group Shifted Strings
Times: 1
*/

class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
    	   unordered_map<string, vector<string>> hash;
    	   for (auto s : strings) {
    	   	   hash[getGroupKey(s)].push_back(s);
    	   }

    	   vector<vector<string>> ret;
    	   for (auto it = hash.begin(); it != hash.end(); ++it) {
    	   	   vector<string> line(it->second.begin(), it->second.end());
    	   	   ret.push_back(line);
    	   }

    	   return ret;
    }

private:
	   string getGroupKey(string& s) {
	   	   string ret(s);
	   	   int offset = s[0] - 'a';
	   	   for (int i = 0; i < s.length(); ++i) {
	   	   	   ret[i] = ret[i] - offset;

	   	   	   if (ret[i] < 'a') ret[i] += 26;
	   	   }

	   	   return ret;
	   }
}
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string baseStr = strs[0];

        //edge case
        if(n == 0) {
            return "";
        }

        for(int i=0; i<baseStr.length(); i++) {
            for(int j=1; j<strs.size(); j++) {
                if(baseStr[i] != strs[j][i]) {
                    return baseStr.substr(0,i);
                    // here substr(0, i) means it return a substring of our baseStr in which substring starts from 0th index of the baseStr and the length of the substr is i.
                }
            }
        }

        return baseStr;

    }
};
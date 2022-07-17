class Solution {
public:
    
    void solve(string digits,unordered_map<int, string> &m, vector <string> &ans, string output, int i)
    {
        if(i>= digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number = digits[i] - '0';
        for(int j = 0; j< m[number].length(); j++)
        {
            output.push_back(m[number][j]);
            solve(digits, m, ans, output, i+1);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        unordered_map <int, string> m;
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";
        
        vector <string> ans;
        string output = "";
        
        if(digits.length() == 0)
        {
            return ans;
        }
        int index = 0;
        solve(digits,m, ans, output, index);
        return ans;
        
    }
};
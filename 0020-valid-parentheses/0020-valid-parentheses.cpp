class Solution
{
public:
    bool isValid(string s)
    {   
        if(s.length()%2!=0){
            return false;
        }
        stack<char> ans;
        for (int i=0;i<s.length();i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                ans.push(s[i]);
            }
            else
            {
                if (ans.empty())
                {
                    return false;
                }
                else if ((ans.top() == '(' && s[i] != ')') || (ans.top() == '{' && s[i] != '}') || (ans.top() == '[' && s[i] != ']'))
                {
                    return false;
                }
                ans.pop();
            }
           
        }
         return ans.empty();
    }
};
class Solution {
public:
    int operate(int a, int b, string token)
    {
        if (token == "+") return a + b;
        if (token == "-") return a - b;
        if (token == "*") return a * b;
        if (token == "/") return a / b;
        throw runtime_error("Invalid RPN expression");
    }
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> st;
        int result = 0;
        for(string token : tokens)
        {
            if(token == "+" || token == "-" || token == "*" || token == "/" )
            {
                int b = st.top();
                st.pop();

                int a = st.top();
                st.pop();
                result = operate(a,b,token);
                st.push(result);
            }
            else
            {
                st.push(stoi(token));
            }
        }
        if (st.size() == 1)
        {
            return st.top();
        }
        throw runtime_error("Invalid RPN expression");
    }
};

//we can also solve this problem by unodered map
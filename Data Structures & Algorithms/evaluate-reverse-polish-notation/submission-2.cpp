class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string &ch: tokens){
            if(ch!="+" && ch!="-" && ch!="*" && ch!="/") st.push(stoi(ch));
            else{
                    if(ch=="+")
                        {int num1 = st.top();
                        st.pop();
                        int num2 = st.top();
                        st.pop();
                        st.push(num2+num1);
                        }
                    else if(ch=="-")
                        {int num1 = st.top();
                        st.pop();
                        int num2 = st.top();
                        st.pop();
                        st.push(num2-num1);
                        }
                    else if(ch=="*")
                        {int num1 = st.top();
                        st.pop();
                        int num2 = st.top();
                        st.pop();
                        st.push(num1*num2);
                        }
                    else if(ch=="/")
                        {int num1 = st.top();
                        st.pop();
                        int num2 = st.top();
                        st.pop();
                        st.push(num2/num1);
                        }
            }
        }
        return st.top();
    }
};

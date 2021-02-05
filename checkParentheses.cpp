#include <bits/stdc++.h>
using namespace std;

void checkParentheses(string st, int N)
{
    bool ans = true;

    stack s;

    for (int i = 0; i < N; i++)
        if (st[i] == '(' || st[i] == '[' || st[i] == '{')
            s.push(st[i]);
        else
        {
            if (!s.empty())
            {
                char temp = s.top();

                s.pop();

                if (st[i] == ')' && temp != '(')
                {
                    ans = false;
                    break;
                }
                if (st[i] == ']' && temp != '[')
                {
                    ans = false;
                    break;
                }
                if (st[i] == '}' && temp != '{')
                {
                    ans = false;
                    break;
                }
            }
            else
            {
                ans = false;
                break;
            }
        }

    if (!s.empty())
        ans = false;
    if (ans)
        cout << "balanced";
    else
        cout << "Not balanced";
}
int main()
{
    string str = "(){}([])";
    int size = s.length();
    checkParentheses(str, size);
}

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	string mainStr;

	while (1)
	{
		stack<char> st;
		bool isSuccess = true;

		getline(cin, mainStr);

		if (mainStr == ".")
			break;

		for (int i = 0; i < mainStr.length(); i++)
		{
			char c = mainStr[i];
			if (c == '(' || c == '[')
			{
				st.push(c);
				continue;
			}
			else if (c == ')')
			{
				if (st.empty() || st.top() != '(')
				{
					isSuccess = false;
					break;
				}
				st.pop();
			}
			else if (c == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					isSuccess = false;
					break;
				}
				st.pop();
			}
			else
				continue;
		}
		if (!st.empty())
			isSuccess = false;

		cout << (isSuccess ? "yes" : "no") << '\n';
	}
	return 0;
}
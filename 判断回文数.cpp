#include <iostream>
#include<string>
using namespace std;

bool AllisNum(string str);

int main(void)
{
	string s;
	
	cin >> s;
	
	if (AllisNum(s))
	{
		int n = s.length();
		int x;
		
		if (n != 1)
		{
			if (n % 2 == 0)
			{
				x = n / 2;

				for (int i = 0; i < x; i++)
				{
					if (s[i] != s[n - 1 - i])
					{
						cout << "这不是回文数" << endl;
						break;
					}
					if (i = x - 1 && s[x - 1] == s[x])
					{
						cout << "这是回文数" << endl;
						break;
					}
				}
			}
			else
			{
				x = (n - 1) / 2;

				for (int i = 0; i < x; i++)
				{
					if (s[i] != s[n - 1 - i])
					{
						cout << "这不是回文数" << endl;
						break;
					}
					if (i = x - 1 && s[x - 1] == s[x + 1])
					{
						cout << "这是回文数" << endl;
						break;
					}
				}
			}
		}
		else
		{
			cout << "这是回文数" << endl;
		}
		

		
	}
	else
	{
		cout << "This is not a number" << endl;
	}
	return 0;
}

bool AllisNum(string str)
{
	for (int i = 0; i < str.size(); i++)
	{
		int tmp = (int)str[i];
		if (tmp >= 48 && tmp <= 57)
		{
			continue;
		}
		else
		{
			return false;
		}
	}
	//return true;
}
#include <iostream>
using namespace std;
int main()
{
	// ���ڴ��������Ĵ���
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + 3;
		}
	}
	cout << str;
	return 0;
}
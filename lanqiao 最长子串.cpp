//#include <iostream>
//using namespace std;
//const int N = 1000;
//int main()
//{
//	// 请在此输入您的代码
//	string s;
//	int k, num = 0;
//	int arr[N] = { 0 };
//	cin >> s >> k;
//	int length = s.size();
//	for (int i = 0, j = -1; j < length; j++)//j=-1，因为j++后，j=0，所以从0开始
//	{
//		arr[s[j]]++;//记录每个字符出现的次数
//		while (arr[s[j]] > k)
//		{
//			arr[s[i]]--;//i指向的字符出现次数减一
//			i++;//如果字符出现次数大于k，则i++，直到字符出现次数小于等于k
//		}
//		int temp = j - i + 1;
//		num = max(num, temp);
//	}
//	cout << num;
//	return 0;
//}
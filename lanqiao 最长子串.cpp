//#include <iostream>
//using namespace std;
//const int N = 1000;
//int main()
//{
//	// ���ڴ��������Ĵ���
//	string s;
//	int k, num = 0;
//	int arr[N] = { 0 };
//	cin >> s >> k;
//	int length = s.size();
//	for (int i = 0, j = -1; j < length; j++)//j=-1����Ϊj++��j=0�����Դ�0��ʼ
//	{
//		arr[s[j]]++;//��¼ÿ���ַ����ֵĴ���
//		while (arr[s[j]] > k)
//		{
//			arr[s[i]]--;//iָ����ַ����ִ�����һ
//			i++;//����ַ����ִ�������k����i++��ֱ���ַ����ִ���С�ڵ���k
//		}
//		int temp = j - i + 1;
//		num = max(num, temp);
//	}
//	cout << num;
//	return 0;
//}
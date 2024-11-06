//闰年展示
//题目描述：
//
//输入 x, y，输出 [x, y] 区间中闰年个数，并在下一行输出所有闰年年份数字，使用空格隔开。
//
//输入格式：
//输入两个正整数 x, y，以空格隔开。
//
//输出格式：
//第一行输出一个正整数，表示 [x, y]区间中闰年个数
//第二行输出若干个正整数，按照年份单调递增的顺序输出所有闰年年份数字
//
//样例输入：
//1989 2001
//
//样例输出：
//3
//1992 1996 2000
//
//提示：
//
//数据保证，1582 <= x < y < = 3000
#include<iostream>
using namespace std;
//int func(int x,int y)
//{
//	int count = 0;
//	int i = 0;
//	for (i = x;i <= y; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	for (i = x; i <= y; i++)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0) || (i % 400 == 0))
//		{
//			cout << i << endl;
//		}
//	}
//	return count;
//	return i;
//}
//int main()
//{
//	int x, y;
//	cin >> x>>y;
//	func(x, y);
//}
//int ans[1500];
//int main() {
//	int x, y;
//	cin >> x >> y;//输入不解释
//	int cnt = 0;
//	for (int i = x; i <= y; i++) {
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) 
//		{
//			ans[cnt++] = i;//记答案,次数加一
//		}
//	}
//	cout << cnt << endl;//先输出次数
//	for (int i = 0; i < cnt; i++) {
//		cout << ans[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
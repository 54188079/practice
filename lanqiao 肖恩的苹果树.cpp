//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
////int min(int a, int b)
////{
////	if (a < b) {
////		return a;
////	}
////	return b;
////}
////int main()
////{
////	// 请在此输入您的代码
////	int N,M;
////	int max=0;
////	cin >> N >> M;
////	vector<int> v;
////	for (int i = 0; i < N; i++) {
////		int a;
////		cin >> a;
////		v.push_back(a);
////	}
////	
////	int* l = &v[0], * r = &v[N], mid = (*l + *r)/ 2;
////	while (l<r)
////	{
////		if (min(mid - *l, *r - mid) > max)
////		{
////			max = min(mid - *l, *r - mid);
////		}
////		if (mid - *l > *r - mid) //左边的差值大，说明mid小了
////		{
////			*r = mid;
////			mid = (*l + *r) / 2;
////		}
////		else
////		{
////			*l = mid;
////			mid = (*l + *r) / 2;
////		}
////		
////	}
////	cout << max;
////	cout << l << r;
////}
//const int N = 1e5;
//int a[N];
//int n, m;
//
//int check(int mid)
//{
//	int conut = 1;
//	int lst = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		if ((a[i] - a[lst]) >= mid)//lst表示上一个大于mid的数
//		{
//			conut++;//conut表示大于mid的数的个数
//			lst = i;
//		}
//	}
//	return conut;
//}
//int main()
//{
//
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	sort(a + 1, a + n + 1);
//	int l = 1, r = 1e9;
//	while (l + 1 != r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid) < m)
//		{
//			r = mid;
//		}
//		else
//			l = mid;
//	}
//	cout << l << '\n';
//}
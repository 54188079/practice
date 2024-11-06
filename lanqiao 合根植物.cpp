//#include <iostream>
//using namespace std;
//const int N=1000010;
//int p[N];
//int find(int x)
//{
//	if (p[x]!=x)
//	{
//		p[x] = find(p[x]);
//	}
//	return p[x];
//}
//int main()
//{
//	// 请在此输入您的代码
//	int m, n,k;
//	
//	cin >> m >> n >> k;
//	//初始化并查集,所有植物自成一类
//	for (int i = 1; i <= m * n; i++)
//	{
//		p[i] = i;
//	}
//	//处理输入的k个关系
//	for (int i = 0; i < k; i++) 
//	{
//		int a, b;
//		cin >> a >> b;
//		int pa = find(a);
//		int pb = find(b);
//		if (pa != pb)
//		{
//			p[pa] = pb;
//		}
//	}
//	int count = 0;
//	for (int i = 1; i <= m * n; i++)
//	{
//		if(p[i]==i)
//			count++;
//	}
//	cout << count<<endl;
//	system("pause");
//	return 0;
//}
//
//
// 
//    
//    

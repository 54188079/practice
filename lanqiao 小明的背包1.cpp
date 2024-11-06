//#include <iostream>
//using namespace std;
//int arr[10010][10010];
//int v[10010], w[10010];//体积和价值
//int main()
//{
//	// 请在此输入您的代码
//	int V, N;
//	cin >>N >> V;
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> v[i] >> w[i];
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= V; j++)
//		{
//			if (j < v[i])//如果背包容量小于物品体积
//			{
//				arr[i][j] = arr[i - 1][j];//最优解就是上一个物品时的最优解
//			}
//			else
//				arr[i][j] = max(arr[i - 1][j], arr[i - 1][j - v[i]]+ w[i]);//最优解就是上一个物品时的最优解和当前物品时的最优解的最大值
//		}
//	}
//	cout << arr[N][V];
//	return 0;
//}

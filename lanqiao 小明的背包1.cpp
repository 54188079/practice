//#include <iostream>
//using namespace std;
//int arr[10010][10010];
//int v[10010], w[10010];//����ͼ�ֵ
//int main()
//{
//	// ���ڴ��������Ĵ���
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
//			if (j < v[i])//�����������С����Ʒ���
//			{
//				arr[i][j] = arr[i - 1][j];//���Ž������һ����Ʒʱ�����Ž�
//			}
//			else
//				arr[i][j] = max(arr[i - 1][j], arr[i - 1][j - v[i]]+ w[i]);//���Ž������һ����Ʒʱ�����Ž�͵�ǰ��Ʒʱ�����Ž�����ֵ
//		}
//	}
//	cout << arr[N][V];
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int arr[1005][1005];
//int v[1005], w[1005];
//int main()
//{
//    // ���ڴ��������Ĵ���
//    int N, V;
//    cin >> N >> V;
//    for (int i = 1; i <= N; i++)
//    {
//        cin  >>w[i]>>v[i];
//    }
//    for (int i = 1; i <= N; i++)
//    {
//        for (int j = 1; j <= V; j++)
//        {
//            arr[i][j] = arr[i - 1][j];//�ȼ��費ѡ
//            if (j >= w[i])
//            {
//                int temp = j / w[i];//����ѡ�ĸ���
//                for (int k = 1; k <= temp; k++)//ѡk��
//                {
//                    arr[i][j] = max(arr[i][j], arr[i][j - k * w[i]] + k * v[i]);
//                }
//            }
//        }
//    }
//    cout << arr[N][V]<<endl;
//    return 0;
//}
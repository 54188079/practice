//#include<iostream>
//using namespace std;
//const int N=100000;
//int n, k;
//int h[N], w[N];
//bool check(int mid)//�߳�Ϊmid��������
//{
//	int cut = 0;
//	for (int i = 0; i < n; i++)//����ÿ���ɿ���
//	{
//		cut += (h[i] / mid) * (w[i] / mid);//�������г����ٿ��ɿ���
//		if (cut >= k)
//			return true;
//	}
//        return false;
//}
//
//int main()
//{
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> h[i] >> w[i];
//	}
//	//���ֲ���
//	int l = 1, r = 100000;//l��ʾ��С�߳���r��ʾ���߳�
//	while (l<r)
//	{
//		int mid = l + r + 1 >> 1;//ȡ�м�ֵ,>>1��ʾ����2
//		if (check(mid))
//			l = mid;//��������г�k���ɿ�������˵���߳����Ը�������l=mid
//		else
//			r = mid - 1;//����в���k���ɿ�������˵���߳����Ը�С������r=mid-1
//	}
//    cout << l << endl;
//	return 0;
//}

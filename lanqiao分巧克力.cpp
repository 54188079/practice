//#include<iostream>
//using namespace std;
//const int N=100000;
//int n, k;
//int h[N], w[N];
//bool check(int mid)//边长为mid的正方形
//{
//	int cut = 0;
//	for (int i = 0; i < n; i++)//遍历每块巧克力
//	{
//		cut += (h[i] / mid) * (w[i] / mid);//计算能切出多少块巧克力
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
//	//二分查找
//	int l = 1, r = 100000;//l表示最小边长，r表示最大边长
//	while (l<r)
//	{
//		int mid = l + r + 1 >> 1;//取中间值,>>1表示除以2
//		if (check(mid))
//			l = mid;//如果可以切出k块巧克力，则说明边长可以更大，所以l=mid
//		else
//			r = mid - 1;//如果切不出k块巧克力，则说明边长可以更小，所以r=mid-1
//	}
//    cout << l << endl;
//	return 0;
//}

////#include <iostream>
////using namespace std;
//////求阶乘的函数
////int jiecheng(int a)
////{
////	for (int i = 1; i < a; i++)
////	{
////		a *= i;
////	}
////	return a;
////}
//////求阶乘最大公因数
////void gys(int a)
////{
////	for (int i = 1; i <= a; i++)
////	{
////		if (a == i * (i + 1))
////		{
////			cout << i + 1;
////			break;
////		}
////	}
////}
////int main()
////{
////	// 请在此输入您的代码
////	int n,count=0;
////	cin >> n;
////	int arr[10];
////	for (int i = 0; i < n; i++)
////	{
////        cin >> arr[i];
////		jiecheng(arr[i]);
////		count+=jiecheng(arr[i]);
////	}
////	//cout << count;//阶乘之和就是最大公因数
////	gys(count);
////	return 0;
////}
////
//////如3个2的阶乘可以合并成3的阶乘,4个3的阶乘可以合并成4的阶乘
//////故得到规律:若数字num出现了cnt次,且num可以被(cnt+1)整除,那么就可以合并成(num+1)的阶乘
////也就是最小的数的阶乘要合并成较大一个数字的条件就是：
////n个k!需要合并成  n / (k + 1)个(k + 1)!需要k + 1整除n，即 n % (k + 1) == 0
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#define int long long // 避免数据范围溢出
//#define endl '\n'
//using namespace std;
////这里对于这个a容器来说，可能里面有求和之后的哪些元素存在，但是这不影响我们的判断，我们只需要把a[0]控制好，相关的条件控制好，就可以判断
//int cal(vector<int>& a, int n)
//{
//    int min_val = a[0];
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] == min_val)
//        {
//            sum++;
//        }
//    }
//    if (sum % (min_val + 1) == 0)
//    {
//        int num_changes = sum / (min_val + 1);
//        for (int i = 0; i < num_changes; i++)
//        {
//            a[i] = min_val + 1;
//        }
//        return cal(a, n); // 递归调用
//    }
//    else
//    {
//        return min_val; // 返回最小值
//    }
//}
//signed main()
//{
//    // 写上这三行代码，输入输出的速度就会变快
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    sort(a.begin(), a.end());
//    int min = cal(a, n);
//    cout << min << endl;
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//int N, K;
//int arr[10010];
//bool check(int x)
//{
//    int res = 0;
//    for (int i = 1; i <= N; i++)
//    {
//        res += arr[i] / x;
//    }
//    return res >= K;//如果 res 大于或等于 K，则返回 true；否则，返回 false。
//}
//int main()
//{
//    cin >> N >> K;
//    for (int i = 1; i <= N; i++)
//        cin >> arr[i];
//    int l = 1, r = 1010;
//
//    while (l < r)
//    {
//        int mid = l + r + 1 >> 1;
//        if (check(mid))
//            l = mid;
//        else
//            r = mid - 1;
//    }
//    if (l)
//        cout << l;
//    else
//        cout << -1;
//    return 0;
//}
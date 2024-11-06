//#include <iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	// 请在此输入您的代码
//	/*int a, b, x;
//	cin >> a >> b >> x;
//	int num = pow(a, b);
//	int temp;
//	temp=pow(10, x);
//	cout << num % temp << endl;
//	return 0;*/
//
//    
//        int a, b, x;
//        cin >> a >> b >> x;
//
//        // 计算 10^x
//        int mod = pow(10, x);
//
//        // 使用快速幂算法计算 (a^b) % (10^x)
//        long long result = 1;
//        long long base = a;
//
//        while (b > 0) {
//            if (b % 2 == 1) {  // 如果 b 是奇数
//                result = (result * base) % mod;
//            }
//            base = (base * base) % mod;  // 平方
//            b /= 2;  // b 除以 2
//        }
//
//        cout << result << endl;
//        return 0;
//}
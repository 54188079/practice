//#include <iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	// ���ڴ��������Ĵ���
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
//        // ���� 10^x
//        int mod = pow(10, x);
//
//        // ʹ�ÿ������㷨���� (a^b) % (10^x)
//        long long result = 1;
//        long long base = a;
//
//        while (b > 0) {
//            if (b % 2 == 1) {  // ��� b ������
//                result = (result * base) % mod;
//            }
//            base = (base * base) % mod;  // ƽ��
//            b /= 2;  // b ���� 2
//        }
//
//        cout << result << endl;
//        return 0;
//}
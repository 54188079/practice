////����һ������Ϊ 10 ���ַ���S��������10 ��СдӢ����ĸ�����ζ�Ӧ����0 ��9��
////�ٸ����ӣ�S Ϊ abcdefghij�����У�a ��Ӧ����0,b ��Ӧ����1,c ��Ӧ����2...j ��Ӧ����9���ڣ�������һ���ַ���
////T���������ֺ�СдӢ����ĸ��ɡ�
////��������ǽ��ַ���T �е��������֣�����S �ж���Ķ�Ӧ��ϵ���滻Ϊ��ĸ��������滻����ַ���
//#include<iostream>
//using namespace std;
////int main()
////{
////	char s[10], t[100];
////	cin >> s >> t;
////	for (int i = 0; i < sizeof(t)/sizeof(t[0]); i++)
////	{
////		if (t[i] >= '0' && t[i] <= '9')
////		{
//			t[i] = s[t[i]-'0'];//������ת��Ϊ��Ӧ����ĸ
////		}
////	}
////	cout << t<<endl;
////	system("pause");
////	return 0;
//
//
//#include <string>
//
//
//std::string replaceDigitsWithLetters(const std::string& S, const std::string& T) {
//    std::string result;
//    for (char ch : T) {//�����ַ���T����rang for���﷨
//        if (isdigit(ch)) {//isdigit�����ж��ַ������Ƿ�Ϊ����
//            // ������ת��Ϊ��Ӧ����ĸ
//            result += S[ch - '0'];//'0'��ʾascll������ַ�Ϊ0��ֵ
//        }
//        else {
//            result += ch; // ���������ַ�����
//        }
//    }
//    return result;
//}
//int main() {
//    std::string S, T;
//    std::cin >> S >> T;
//    std::string output = replaceDigitsWithLetters(S,T);
//    std::cout << output << std::endl; // ���: a1bcde
//    return 0;
//}

////给定一个长度为 10 的字符串S，它包含10 个小写英文字母，依次对应数字0 到9。
////举个例子，S 为 abcdefghij，其中：a 对应数字0,b 对应数字1,c 对应数字2...j 对应数字9现在，给定另一个字符串
////T，它由数字和小写英文字母组成。
////你的任务是将字符串T 中的所有数字，按照S 中定义的对应关系，替换为字母，并输出替换后的字符串
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
//			t[i] = s[t[i]-'0'];//将数字转换为对应的字母
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
//    for (char ch : T) {//遍历字符串T，“rang for”语法
//        if (isdigit(ch)) {//isdigit用于判断字符串中是否为数字
//            // 将数字转换为对应的字母
//            result += S[ch - '0'];//'0'表示ascll码表中字符为0的值
//        }
//        else {
//            result += ch; // 保持其他字符不变
//        }
//    }
//    return result;
//}
//int main() {
//    std::string S, T;
//    std::cin >> S >> T;
//    std::string output = replaceDigitsWithLetters(S,T);
//    std::cout << output << std::endl; // 输出: a1bcde
//    return 0;
//}

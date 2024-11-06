////约瑟夫问题:
////题目描述：
////n个人围成一圈，从第一个人开始报数, 数到 m 的人出列，再由下一个人重新从 1 开始报数，数到 m 的人再出圈，
////依次类推，直到所有的人都出圈，请输出依次出圈人的编号。
////
////输入格式:
////输入两个整数 n, m
////
////输出格式:
////输出一行 n 个整数，按顺序输出每个出圈人的编号。
////
////样例：
////
////样例输入：
////10 3
////
////样例输出：
////3 6 9 2 7 1 8 5 10 4
////
////提示：
////1 <= m, n <= 100
//#include<iostream>
//using namespace std;
//struct ListLink
//{
//	int id;  //编号
//	ListLink *next,*prior ;
//	ListLink() { next = prior = nullptr; }
//}t[100];
//
//void _cut(ListLink*num)  //去掉出列的人的函数
//{
//	num = num->prior;
//	num->next = num->next->next;
//	num = num->next;
//	num->prior = num->prior->prior;
//}
//int main()
//{
//	int n, m,nowNum=1;
//	cin >> n >> m;
//	ListLink* now = t;            //指向目前报数的人的指针
//	for (int i = 1; i < n - 1; i++)
//	{
//		t[i].prior = t + i - 1;
//		t[i].next = t + i + 1;
//		t[i].id = i + 1;
//	}
//		t[0].prior = t + n - 1;
//		t[0].next = t + 1;
//		t[n - 1].prior = t + n - 2;
//		t[n - 1].next = t;
//		t[0].id = 1;
//		t[n - 1].id = n;
//	//初始化链表
//	while (n > 0)
//	{
//		if (m == nowNum)
//		{
//			cout << now->id << " " ;//输出出局的人的编号
//			_cut(now);//出局
//			nowNum = 1;//初始化数字
//			n--;//总人数减一
//			now = now->next; //下一个人
//		}
//		else
//		{
//			nowNum++;//数字加一
//			now = now->next;//下一个人
//		}
//	}
//	return 0;
//}
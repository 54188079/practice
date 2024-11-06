//#include <iostream>
//using namespace std;
//struct Time
//{
//	int UI = 0;
//	int time = 0;
//};
//int main()
//{
//	int n;
//	cin >> n;
//	Time timeStr[100];
//	for (int i = 0; i < n; i++)
//	{
//		int U, I;
//		int h, m, s;
//		scanf_s("%d:%d:%d", &h, &m, &s);
//		cin >> U>>I;
//		timeStr[i].UI = U * I;
//		timeStr[i].time = h * 3600 + m * 60 + s;
//	}
//	int T=0;
//	for (int i = 1; i < n; i++)
//	{
//		T+= (timeStr[i].time - timeStr[i - 1].time) * timeStr[i-1].UI;
//	}
//	cout <<T << endl;
//	return 0;
//}

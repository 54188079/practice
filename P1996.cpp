////Լɪ������:
////��Ŀ������
////n����Χ��һȦ���ӵ�һ���˿�ʼ����, ���� m ���˳��У�������һ�������´� 1 ��ʼ���������� m �����ٳ�Ȧ��
////�������ƣ�ֱ�����е��˶���Ȧ����������γ�Ȧ�˵ı�š�
////
////�����ʽ:
////������������ n, m
////
////�����ʽ:
////���һ�� n ����������˳�����ÿ����Ȧ�˵ı�š�
////
////������
////
////�������룺
////10 3
////
////���������
////3 6 9 2 7 1 8 5 10 4
////
////��ʾ��
////1 <= m, n <= 100
//#include<iostream>
//using namespace std;
//struct ListLink
//{
//	int id;  //���
//	ListLink *next,*prior ;
//	ListLink() { next = prior = nullptr; }
//}t[100];
//
//void _cut(ListLink*num)  //ȥ�����е��˵ĺ���
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
//	ListLink* now = t;            //ָ��Ŀǰ�������˵�ָ��
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
//	//��ʼ������
//	while (n > 0)
//	{
//		if (m == nowNum)
//		{
//			cout << now->id << " " ;//������ֵ��˵ı��
//			_cut(now);//����
//			nowNum = 1;//��ʼ������
//			n--;//��������һ
//			now = now->next; //��һ����
//		}
//		else
//		{
//			nowNum++;//���ּ�һ
//			now = now->next;//��һ����
//		}
//	}
//	return 0;
//}
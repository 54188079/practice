//#include <iostream>
//using namespace std;
//
//int arr[100];//��ŵ�����һ��Ԫ������һ��
//int n, coun=0;
//bool isok(int row, int col)
//{
//	for (int i = 1; i < row; i++)//�ж���һ��֮ǰ������û�к���һ�г�ͻ��
//	{
//		if (arr[i] == col)//�ж���һ����û�к���һ�г�ͻ��
//			return false;
//		if(col-row==arr[i]-i&&row-i<3)//y=x+b,���Կ��Է���y-x=b���������ϵ�Ķ����������
//			return false;
//		if(col+row==arr[i]+i&&row-i<3)//y=-x+b,���Կ��Է���y+x=b���������ϵ�Ķ����������
//			return false;
//	}
//	return true;
//}
//void bfs(int row)
//{
//	if (row > n)
//	{
//		coun++;
//		return;
//	}
//	for (int i = 1; i <= n; i++)//����һ�е������ж�����һ��
//	{
//		if (isok(row, i))
//		{
//			arr[row] = i;//�ʺ󱻷ŵ���row�еĵ�i��
//			bfs(row + 1);//�ݹ������һ��
//			arr[row] = 0;//���ñ��볢���·���
//		}
//	}
//}
//int main()
//{
//	// ���ڴ��������Ĵ���
//	
//	cin >> n;
//	bfs(1);
//	cout << coun << endl;
//	return 0;
//}
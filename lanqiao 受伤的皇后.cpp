//#include <iostream>
//using namespace std;
//
//int arr[100];//存放的是这一行元素在哪一列
//int n, coun=0;
//bool isok(int row, int col)
//{
//	for (int i = 1; i < row; i++)//判断这一行之前的行有没有和这一行冲突的
//	{
//		if (arr[i] == col)//判断这一行有没有和这一行冲突的
//			return false;
//		if(col-row==arr[i]-i&&row-i<3)//y=x+b,所以可以发现y-x=b，这条线上点的都满足此条件
//			return false;
//		if(col+row==arr[i]+i&&row-i<3)//y=-x+b,所以可以发现y+x=b，这条线上点的都满足此条件
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
//	for (int i = 1; i <= n; i++)//把这一行的所有列都遍历一遍
//	{
//		if (isok(row, i))
//		{
//			arr[row] = i;//皇后被放到了row行的第i列
//			bfs(row + 1);//递归调用下一行
//			arr[row] = 0;//重置便与尝试新方案
//		}
//	}
//}
//int main()
//{
//	// 请在此输入您的代码
//	
//	cin >> n;
//	bfs(1);
//	cout << coun << endl;
//	return 0;
//}
////#include <iostream>
////using namespace std;
//////��׳˵ĺ���
////int jiecheng(int a)
////{
////	for (int i = 1; i < a; i++)
////	{
////		a *= i;
////	}
////	return a;
////}
//////��׳��������
////void gys(int a)
////{
////	for (int i = 1; i <= a; i++)
////	{
////		if (a == i * (i + 1))
////		{
////			cout << i + 1;
////			break;
////		}
////	}
////}
////int main()
////{
////	// ���ڴ��������Ĵ���
////	int n,count=0;
////	cin >> n;
////	int arr[10];
////	for (int i = 0; i < n; i++)
////	{
////        cin >> arr[i];
////		jiecheng(arr[i]);
////		count+=jiecheng(arr[i]);
////	}
////	//cout << count;//�׳�֮�;����������
////	gys(count);
////	return 0;
////}
////
//////��3��2�Ľ׳˿��Ժϲ���3�Ľ׳�,4��3�Ľ׳˿��Ժϲ���4�Ľ׳�
//////�ʵõ�����:������num������cnt��,��num���Ա�(cnt+1)����,��ô�Ϳ��Ժϲ���(num+1)�Ľ׳�
////Ҳ������С�����Ľ׳�Ҫ�ϲ��ɽϴ�һ�����ֵ��������ǣ�
////n��k!��Ҫ�ϲ���  n / (k + 1)��(k + 1)!��Ҫk + 1����n���� n % (k + 1) == 0
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#define int long long // �������ݷ�Χ���
//#define endl '\n'
//using namespace std;
////����������a������˵���������������֮�����ЩԪ�ش��ڣ������ⲻӰ�����ǵ��жϣ�����ֻ��Ҫ��a[0]���ƺã���ص��������ƺã��Ϳ����ж�
//int cal(vector<int>& a, int n)
//{
//    int min_val = a[0];
//    int sum = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] == min_val)
//        {
//            sum++;
//        }
//    }
//    if (sum % (min_val + 1) == 0)
//    {
//        int num_changes = sum / (min_val + 1);
//        for (int i = 0; i < num_changes; i++)
//        {
//            a[i] = min_val + 1;
//        }
//        return cal(a, n); // �ݹ����
//    }
//    else
//    {
//        return min_val; // ������Сֵ
//    }
//}
//signed main()
//{
//    // д�������д��룬����������ٶȾͻ���
//    ios::sync_with_stdio(0);
//    cin.tie(0);
//    cout.tie(0);
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    for (int i = 0; i < n; i++)
//        cin >> a[i];
//    sort(a.begin(), a.end());
//    int min = cal(a, n);
//    cout << min << endl;
//    return 0;
//}
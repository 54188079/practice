//#include <iostream>
//#include<cstring>
//#include<stack>
//using namespace std;
//bool a[128];//��¼�ƶ����Ƿ��и���,128��ASCII�뷶Χ
//int main()
//{
//    string A;
//    string B;
//    cin >> A >> B;
//    stack<char> S;//��ջ���ƶ�
//    S.push(A[0]);
//    //A�ȳ���
//    a[A[0] - 0] = 1;//��¼A����,A[0]-0���ַ�ת����,=1��ʾ�и���
//    A.erase(0, 1);//ɾ��A����
//    bool flag = 1;//��¼�Ƿ���Գ���
//    int count = 0;//��¼���ƴ���
//    while (A.length() && B.length() && count < 10000)
//    {
//        string* p=flag?&B:&A;//flagΪ1ʱ,B����,flagΪ0ʱ,A����
//        char tmp = (*p)[0];//��¼����
//        S.push(tmp);//���ƶ�
//        p->erase(0, 1);//ɾ������
//        if (a[tmp - 0] == 0)
//        {
//            a[tmp - 0] = 1;//��¼����
//            flag = !flag;//�л����Ʒ�
//        }
//        else
//        {//��������ǰ�ַ����ջ�һ������
//            *p += S.top();//���ƶѶ������ջ�
//            S.pop();//���ƶ�
//            while (S.top() != tmp)//���ƶѶ����Ʋ��ǵ�ǰ�ַ�ʱ
//            {
//                *p += S.top();//���ƶѶ������ջ�
//                a[S.top() - 0] = 0;//��¼�ջص���
//                S.pop();//���ƶ�
//            }
//            *p += S.top();//����ǰ�ַ��ջ�
//            a[S.top() - 0] = 0;
//            S.pop();
//        }
//        count++;//���ƴ�����һ
//
//    }
//    if (count >= 10000)
//        cout<<-1;
//    if (A.length())
//        cout << A;//A������,��A��
//    else
//        cout << B;//B������,��B��
//    return 0;
//}
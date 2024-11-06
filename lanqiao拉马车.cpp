//#include <iostream>
//#include<cstring>
//#include<stack>
//using namespace std;
//bool a[128];//记录牌堆中是否有该牌,128是ASCII码范围
//int main()
//{
//    string A;
//    string B;
//    cin >> A >> B;
//    stack<char> S;//用栈做牌堆
//    S.push(A[0]);
//    //A先出牌
//    a[A[0] - 0] = 1;//记录A的牌,A[0]-0是字符转数字,=1表示有该牌
//    A.erase(0, 1);//删除A的牌
//    bool flag = 1;//记录是否可以出牌
//    int count = 0;//记录出牌次数
//    while (A.length() && B.length() && count < 10000)
//    {
//        string* p=flag?&B:&A;//flag为1时,B出牌,flag为0时,A出牌
//        char tmp = (*p)[0];//记录出牌
//        S.push(tmp);//入牌堆
//        p->erase(0, 1);//删除出牌
//        if (a[tmp - 0] == 0)
//        {
//            a[tmp - 0] = 1;//记录该牌
//            flag = !flag;//切换出牌方
//        }
//        else
//        {//若包含当前字符则收回一部分牌
//            *p += S.top();//将牌堆顶的牌收回
//            S.pop();//出牌堆
//            while (S.top() != tmp)//当牌堆顶的牌不是当前字符时
//            {
//                *p += S.top();//将牌堆顶的牌收回
//                a[S.top() - 0] = 0;//记录收回的牌
//                S.pop();//出牌堆
//            }
//            *p += S.top();//将当前字符收回
//            a[S.top() - 0] = 0;
//            S.pop();
//        }
//        count++;//出牌次数加一
//
//    }
//    if (count >= 10000)
//        cout<<-1;
//    if (A.length())
//        cout << A;//A还有牌,则A输
//    else
//        cout << B;//B还有牌,则B输
//    return 0;
//}
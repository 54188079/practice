//#include <iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//bool compare(pair<int, int>& temp, pair<int, int>& book) {
//    if (temp.second == book.second) {
//        return temp.first < book.first;
//    }
//    else return temp.second < book.second;
//}
//void Shellsort(vector<pair<int,int>>& m, int n)
//{
//        vector<int> gaps;
//        for (int gap = n / 2; gap > 0; gap /= 2) {
//            gaps.push_back(gap);
//        }
//        for (int gap : gaps)
//        {
//            gap /= 2;//先分成5组，然后是2组，最后是1组
//            for (int i = gap; i < n; i++)
//            {
//                pair<int, int> temp = m[i];
//                int j = i;
//                for (; j >= gap && compare(temp, m[j - gap]); j -= gap)
//                {
//                    if (m[j] > temp)//j下标的值大，将j下标的值放到j变量加上一个gap的位置上
//                        m[j] = m[j - gap];
//                    else
//                        //j下标的值较小，j下标的值要直接放到j变量加上一个gap的位置上
//                        break;
//                }
//                m[j] = temp;
//            }
//        }
//}
//
//int main()
//{
//    // 请在此输入您的代码
//    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//    int N;
//    cin >> N;
//    vector<pair<int, int>> m(N);
//    for (int i=1; i <= N; i++)
//    {
//        cin>> m[i].first>>m[i].second;
//    }
//    Shellsort(m ,N);
//    for (const auto& book : m)
//    {
//        cout<<book.first<<endl;
//    }
//    return 0;
//}
#include <iostream>
using namespace std;
int a[1000][1000];
int main()
{
    // ���ڴ��������Ĵ���
   ///* int n;
   // int sum[100] = { 0 };
   // int count = 0;
   // cin >> n;
   // for (int i = 0; i < n; i++)
   //     for (int j = 0; j < n; j++)
   //     {
   //         cin >> a[i][j];
   //     }
   // for (int i = 0; i <= n; i++)
   // {
   //     for (int j = 0; j < n; j++)
   //     {
   //         if (a[i][j] >= 0)
   //         {
   //             count = count + 1;
   //             sum[i] = count;
   //         }
   //     }
   //     count = 0;
   // }
   // for (int i = 0; i < n; i++) {
   //     cout << sum[i] << " ";
   // }      */
    int n;
    cin >> n;
    int sum[1000] = { 0 };
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1) {
                sum[i]++; //sum[i]�����i���м���1
            }
            else if (a[i][j] == -1) {
                sum[j]++; //sum[j]�����j���м���-1
            }
            else {
                sum[i]++;
                sum[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << sum[i] / 2 << " ";
    }
    cout << endl;
    return 0;
}
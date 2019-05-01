#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int a[n+2][m+2];
    int sum[n+2][m+2];
    int buff[n+2][m+2];
    for (int i = 0; i < n+2; i++)
        for (int j = 0; j < m+2 ; j++)
            a[i][j] = -1;
    for (int i = 0; i < n+2; i++)
        for (int j = 0; j < m+2 ; j++)
            sum[i][j] = 0;


   // a.assign(-1);
   // sum.assign(0);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m ; j++)
        {
            int temp;
            cin  >> temp ;
            a[i][j] = temp;
        }
    for (int v = 0; v < k; v++)
    {
        for (int i = 0; i < n+2; i++)
        for (int j = 0; j < m+2 ; j++)
            buff[i][j] = -1;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m ; j++)
            {
                int count1 = 0;
                if (a[i-1][j] == 2 )
                    count1++;
                if (a[i][j-1] == 2 )
                    count1++;
                if (a[i+1][j] == 2 )
                    count1++;
                if (a[i][j+1] == 2 )
                    count1++;
                if (count1 > 1 )
                {
                    buff[i][j] = 2;
                    if (a[i][j] != 2 )sum[i][j] += 1;
                }
                else
                {
                    count1 = 0;
                    if (a[i-1][j] == 2 || a[i-1][j] == 3 )
                        count1++;
                    if (a[i][j-1] == 2 || a[i][j-1] == 3 )
                        count1++;
                    if (a[i+1][j] == 2 || a[i+1][j] == 3 )
                        count1++;
                    if (a[i][j+1] == 2 || a[i][j+1] == 3)
                        count1++;
                    if (count1 >= 1 )
                    {
                        buff[i][j] = 3;
                        if (a[i][j] != 3 )sum[i][j] += 1;
                    }
                    else
                    {
                        buff[i][j] = 1;
                        if (a[i][j] != 1 ) sum[i][j] += 1;
                    }
                }

            }
            for (int i = 0; i < n+2; i++)
        for (int j = 0; j < m+2 ; j++)
            a[i][j] = buff[i][j];


    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m ; j++)
        {
            cout << sum[i][j]<< " ";
        }
        cout << endl;
    }

}

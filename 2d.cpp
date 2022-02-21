#include <iostream>
using namespace std;

int n,m,mat[101][101],x,y;
int coada[201],inc=0,sf=0;

int d[101][101];

int main()
{
    /// Citire
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        cin >> x >> y;
        /// trecem in matrice
        mat[x][0]++;
        mat[x][mat[x][0]] = y;
        mat[y][0]++;
        mat[y][mat[y][0]] = x;
    }

    for(int i=1;i<=n;i++)
    {
        sf = inc = 0;
        coada[sf++] = i;
        int nr = 0;
        while(inc < sf)
        {
            nr++;
            for(int k=1;k<=mat[coada[inc]][0];k++)
                if(d[i][mat[coada[inc]][k]] == 0)
                {
                    coada[sf++] = mat[coada[inc]][k];
                    d[i][mat[coada[inc]][k]] = nr;
                }

            inc++;
        }

        for(int j=1;j<=n;j++)
            if(d[i][j] == 0 && j != i)
                d[i][j] = -1;
        d[i][i] = 0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout << d[i][j] << " ";

        cout << endl;
    }
    return 0;
}

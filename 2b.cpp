#include <iostream>
using namespace std;

int n,m,mat[101][101],x,y;
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

    int nr_izolate = 0;
    for(int i=2;i<=n;i++)
        if(mat[i][0] == 0)
            nr_izolate++;
    //cout << nr_izolate;

    cout << nr_izolate ;



    return 0;
}

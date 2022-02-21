#include <iostream>
using namespace std;

int n,m,mat[101][101],x,y;


void f3()
{
    /// Citire
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        cin >> x >> y;
        /// trecem in matrice
        mat[x][i] = mat[y][i] = 1;
    }

    /// Afisare
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void f2()
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

    /// Afisare
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

void f1()
{
    /// Citire
    cin >> n >> m;
    for(int i=1;i<=m;i++)
    {
        cin >> x >> y;
        /// trecem in matrice
        mat[x][y] = mat[y][x] = 1;
    }

    /// Afisare
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    //f1();
    //f2();
    //f3();
    return 0;
}

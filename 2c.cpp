#include <iostream>
using namespace std;

int n,m,mat[101][101],x,y;
int coada[201],inc=0,sf=0;
bool v[101]; /// vector de frecventa

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

    coada[sf++] = 1;
    v[1] = 1;
    while(inc < sf)
    {
        for(int i=1;i<=mat[coada[inc]][0];i++)
            if(!v[mat[coada[inc]][i]])
            {
                coada[sf++] = mat[coada[inc]][i];
                v[mat[coada[inc]][i]] = 1;
            }

//        for(int i=inc;i<sf;i++)
//            cout << coada[i] << " ";
//        cout << endl;

        inc++;
    }

    for(int i=1;i<=n;i++)
        if(!v[i])
        {
            cout << "Nu e conex!";
            return 0;
        }
    cout << "E conex!";
    return 0;
}

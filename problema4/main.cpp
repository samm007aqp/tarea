#include <iostream>
using namespace std;
  int **c = 0;
void mul(int  a[][2],int b[ ][3], int N, int M, int P){
    c = new int *[N];
    for (int i =0 ; i < N  ; i++)
        c[i]= new int [P];
    //{{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<P;j++){
            c[i][j]=0;
            for(int k=0;k<M;k++)
                   {
                       c[i][j]+= a[i][k]*b[k][j];
                }
        }
    }
}
int main()
{   const int N=4,M=2,P=3;
    int a[N][M]={{1,2},{3,-4},{5,6},{-7,-8}};
    int b[M][P]={{9,8,7},{6,-5,-4}};

    mul(a,b,N,M,P);


       for (int i=0;i<N;i++){

        for (int j=0;j<P;j++){cout<<c[i][j]<<"\t";}
        cout<<"\n";
       }
}

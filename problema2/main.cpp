#include <iostream>

using namespace std;

int sumar_array(int a[],int tam){
   int sum=0;
 for(int i=0; i<tam; i++) sum+=a[i];
 return sum;
}

int suma(int a[],int tam, int sum){
 if (tam==0) return sum;
 sum+= a[tam-1];
 return suma(a,--tam,sum);
}

int main()
{ int arreglo[]={1,2,3,4,5,6,7,8,9,10};

cout<<sumar_array(arreglo,10)<<endl;
cout<<suma(arreglo,10,0)<<endl;
}

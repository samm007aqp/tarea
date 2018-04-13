#include <iostream>

using namespace std;
void inver(char a[])
{   int c=0;
    while(a[c]!='\0'){c++;}
    cout <<c<<endl;
    char temp;
    for (int i=0; i< c/2; i++){
        temp = a[i];
        a[i]= a[c-(i+1)];
        a[c-(i+1)] = temp;
    }
}
void inver_p(char *a)
{   char *aux=a;
    while(*a!='\0'){a++;}
    char *temp= new char;
    while ((a-aux)>0){
        *temp = *aux;
        *aux = *--a;
         *a = *temp;  aux++;}
}


int main()
{
    char cad[] ="hola a todos";
    inver_p(cad);
    cout<<cad<<endl;
    return 0;


}

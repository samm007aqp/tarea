#include <iostream>

using namespace std;

int tam(char a[]){
    int i=0;
    while(a[i]!='\0')i++;
    return i;
}
 int tama(char *a)
 {
    char *b= a;
    while(*a!='\0')a++;
    return a - b ;
 }

int main()
{
 char cadena[] ="fsadfsadfsdf";
 cout<<tam(cadena)<<endl;
 //char *cad = &cadena[0];
 //int *p = new int;
 cout<<tama(&cadena[0])<<endl;


 return 0;
}

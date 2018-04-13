#include <iostream>
using namespace std;

void copiar(char a[], char b[]){
    int i=0;
   while(a[i]!= '\0')
    { a[i]=0;  i++; }
    i=0;
    while(b[i]!= '\0')
      {
       a[i]=b[i];
         i++; }

}

char copiar_p(char *x , char *y){
    char *p = x;
    char *p2 = y;
    while(*y!='\0') y++;
    while(*x!='\0'){*x=0; x++;}
    while (*p2!='\0'){ *p++=*p2++;}
    *x='\0';

}




int main()
{   char  t[] = "hola---";
    char s[] = "sergio***************";

    //copiar(s,t);
    copiar_p(s,t);
    cout<<endl<<s<< endl;
    return 0;
}

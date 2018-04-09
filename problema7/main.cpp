#include <iostream>

using namespace std;
void concatenar(char a[], char b[])
{   int i=0;
      while (a[i]!='\0')
        i++;
    int j=0;
    while (b[j]!='\0')
    {   a[i+j] = b[j];
    j++;
    }
    a[i+j] ='\0';

}
char *concaternar_p(char *a, char *b)
{   char *p = a;
    char *p2 = b; int i=0,j=0;
    char *p3;
    while( *a++ !='\0')
         {i++;}
    while( *b++ !='\0')
         {j++;}
    char *aux = new char [i+j+1];
    p3= aux;
    a=p;b=p2;
    for (int k=0; k<i; k++)
    {
        *aux++ = *a++;
    }
     for (int k=0; k<j; k++)
    {
        *aux++ = *b++;
    }
    *aux='\0';
    aux=p3;
    for (int ii=0; ii < i+j+1; ii++)
     cout << *(aux+ii);
 return aux;
}





int main()
{  const int z=1000;
    char t[z] = "hola---";
    char s[] = "sergio***************";
   //concatenar(t,s);

    char *c =  concaternar_p(&s[0],&t[0]);
   // cout<<*c<<endl;
}

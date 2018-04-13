#include <iostream>

using namespace std;

void insert_sort( int *p,int tam )
{   int aux = 0 ;
    for (int i=0; i< tam-1; i++)
    {   if  (*(p+i+1) < *(p+i)) { aux = *(p+i); *(p+i) = *(p+i+1); *(p+i+1) = aux;  }

      for (int j=i; j>1; j--)
        { if(*(p+j-1) < *(p+j-2)) { aux = *(p+j-1); *(p+j-1) = *(p+j-2); *(p+j-2) = aux;     }
            else break;
        }

    }

}

int division(int arr[], int low, int high)
{   int aux=0;
    int pivote = arr[high];
    int i = (low-1);
    int j = low;
    for(;  j<=high-1; j++)
    {
    if (arr[j]<= pivote)
    {
        i++;
        aux = arr[i]; arr[i] = arr[j]; arr[j] = aux;
    }
    }
    if (i!=j){aux = arr[i+1]; arr[i+1] = arr[high]; arr[high] = aux;}
    return i+1;
}

void quickSort(int arr[],int low, int high)
{
    if (low<high)
    { int div = division(arr,low,high);
    quickSort(arr, low, div-1);
    quickSort(arr, div+1,  high);
    }
}

void f_merge(int arr[], int l, int m, int r)
{
    int i=0, j=0, k=l;
    int n1 = m - l + 1;
    int n2 =  r - m;


    int L[n1], R[n2];


    for (int ii = 0; ii < n1; ii++)
        L[ii] = arr[l + ii];
    for (int jj = 0; jj < n2; jj++)
        R[jj] = arr[m + 1+ jj];

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right)
{
    if (left < right)
    {

        int m = left+(right-left)/2;
        merge_sort(arr, left, m);
        merge_sort(arr, m+1, right);

        f_merge(arr, left, m, right);
    }
}


int main()
{  // int arreglo[]= {12,10,43,23,-78,45,123,56,98,41,-90,24};
    int arreglo[]= {12,10,43,23,-78};
    int tam = sizeof(arreglo)/sizeof(arreglo[0]);
    for (int i=0; i<tam;i++){cout << " " <<arreglo[i] ;}
    //insert_sort(arreglo,12);
    //quickSort(arreglo,0,11);
    merge_sort(arreglo, 0, tam-1);
    cout << endl;
    for (int i=0; i<tam;i++){cout << " " <<arreglo[i];}

    return 0;
}

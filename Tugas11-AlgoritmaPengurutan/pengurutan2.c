#include <stdio.h>
#include <string.h>

int main() 
{
    int data[10], n, temp;
    printf("Input Jumlah Bilangan : ");
    scanf("%d", &n);
    for (int i = 0; i<n; i++) 
    {
        printf("Bilangan Ke %d : ", i+1);
        scanf("%d", &data[i]);
    }
    for (int i =0; i < (n-1); i++) 
    {
        for (int j = (i+1) ; j < n; j++)
        {
            if(data[i]>data[j])
            { 
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }    
    printf("\nData yang Telah Diurutkan dari yang Terkecil \n");
    for(int i = 0; i<n ; i++)
    {
        printf("%5d", data[i]);
    }
   return 0;
}
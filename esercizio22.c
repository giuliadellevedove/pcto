#include <stdio.h>
int main ()
{ 
    int n;
    int a=1;
    unsigned long k=1;
    printf ("inserisci un numero\n");
    scanf ("%d",&n);
    while (a<=n)
    { 
        k=k*a;
        a=a+1;
    }
    printf ("%ld\n",k);

}
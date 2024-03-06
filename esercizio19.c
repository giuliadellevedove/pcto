#include <stdio.h>
int main ()
{ 
    int n; 
    int z=1969;
    printf ("inserisci il tuo anno di nascita");
    scanf ("%d",&n);
    if (n<1969)
    {
        printf( "sei nato prima %d prima dello sbarco sulla luna\n",z-n);
    }
    else if ( n>1969)
    { 
        printf ("sei nato dopo %d dopo lo sbarco sulla luna/n",n-z);
    }
    else 
    {
        printf("sei nato nello stesso anno");
    }
} 
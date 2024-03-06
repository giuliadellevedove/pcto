#include <stdio.h>
int main ()
{
    int a;
    int b;
    int c;
    printf ( "inserisci tre lunghezze");
    scanf("%d %d %d", &a,&b,&c);
    if (a==b)
    { 
        if (b==c)
        {
            printf("il triangolo e'equilatero");
        }
    }
    else if ( a==b )
    { 
        
        if (b!=c)
        {
            printf ("il triangolo e'isoscele");
        }
    }
    else if ( "b!c");
    { 
        
        if (b!=c)
        {
            printf ( "il triangolo e'scaleno");
        }
    }
}
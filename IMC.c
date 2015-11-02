#include <stdio.h>
int main()
{
    float PESO=0, ALT=0, IMC=0, MIN=0, MAX=0;
    
    printf ("Informe o PESO em quilogramas (Ex: 55.695): ");
    scanf ("%f", &PESO);
    
    printf ("Informe a ALTURA em metros (Ex: 1.63): ");
    scanf ("%f", &ALT);
    
    MIN = ((ALT*ALT)*19);
    MAX = ((ALT*ALT)*25);
    IMC = PESO / (ALT*ALT);
    
    if (IMC<19)
    {
        printf ("Seu IMC eh %.2f, voce esta abaixo do peso ideal!!! O peso ideal para sua altura eh entre %.3f e %.3f quilogramas \n", IMC, MIN, MAX);
    }
    else 
    {
        if (IMC >=19 && IMC <=25 )
        {
            printf ("Seu IMC eh %.2f, voce esta no peso ideal!!! O peso ideal para sua altura eh entre %.3f e %.3f quilogramas \n", IMC, MIN, MAX);
        }
        else
        {
            if (IMC >25 && IMC <30 )
            {
                printf ("Seu IMC eh %.2f, voce esta acima do peso ideal!!! O peso ideal para sua altura eh entre %.3f e %.3f quilogramas \n", IMC, MIN, MAX);
            }
            else
            {
                printf ("Seu IMC eh %.2f, cuidado voce esta obeso!!! O peso ideal para sua altura eh entre %.3f e %.3f quilogramas \n", IMC, MIN, MAX);
            }
        }
    }
    return 0;
}
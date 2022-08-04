#include <stdio.h>

int main()
{
    int A , B ;
    char op ;
    printf("veuillez saisir la valeur de A :");
    scanf("%d",&A);
    printf("veuillez saisir l'operateur : ");
    scanf("%c" ,&op)
    printf("veuillez saisir la valeur de B : ");
    scanf("%d",&B);
    switch ( op ){
        case '+' : printf("A+B=%d"A+B)
                    break ;
        case '-' : printf("A-B=%d"A-B)
                    break ;
        case '*' :  printf("A*B=%d"AB)
                    break ;
        case '/' :  if(B!=0)
                        printf("A/B=%d"A/B)
                     else
                        printf("la division par 0 est imppossible");
                     break ;
        case 'Q':printf("le programme est quitee")
                     break
        default : printf("l'operateur est incorrect")


                     break ;



    }


    return 0;
}

//Como escrever na tela
#include <stdio.h>

int main(){
    int a = 5;
    int b = 5;
    //lendo inteiro
    printf("%d\n",a);
    printf("%d\n",a+b);
    printf("O valor de A e = %d\n", a);
    scanf("%d", &a);
    printf("O valor de A mudou para = %d\n", a);
    //lendo valor quebrado
    float c = 5.5;
    printf("O valor de C e = %f \n", c);
    scanf("%f", &c);
    printf("O valor de C mudou para %f\n", c);

    //lendo letra
    char d = 't';
    printf("O valor de D e = %c \n", d);
    fflush(stdin);//linpar buffer
    scanf("%c", &d);
    printf("O valor de D mudou para %c\n", d);



    return 0;
}

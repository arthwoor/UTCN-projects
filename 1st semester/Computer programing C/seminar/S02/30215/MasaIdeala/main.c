//L3Pb13
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inaltime,varsta;
    char sex;
    printf("Inaltime=");
    scanf("%d",&inaltime);
    printf("Varsta=");
    scanf("%d",&varsta);
    printf("Sex=");
    scanf("%*c%c",&sex);//"\n%c" " %c"
    if(sex!='M' && sex!='F' )
    {
        printf("sex necunoscut");
    }
    else
    {
        float masa;
        masa=50 + 0.75*(inaltime-150) + (varsta-20)/4.0f;
        if(sex=='F')
        {
            masa-=10;
        }
        printf("Masa ideala este %.2f kg",masa);
    }

    return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D;
    double X1, X2;

    printf("Masukan nilai a : ");
    scanf("%f",&a);
    printf("Masukan nilai b : ");
    scanf("%f",&b);
    printf("Masukan nilai c : ");
    scanf("%f",&c);

    D=(b*b)-(4*a*c);
    if(D<0)
    {
        printf("\nAkar-akar persamaan kuadrat imaginer\n");
    }
    else if(D>0)
    {
        X1=(-b+sqrt(D))/2*a;
        X2=(-b-sqrt(D))/2*a;

        printf("\nNilai X1=%.3lf\n",X1);
        printf("\nNilai X2=%.3lf\n", X2);
    }
    else if(D==0)
    {
        X1=(-b+sqrt(D))/2*a;
        X2=X1;

        printf("\nNilai X1=%.3lf\n", X1);
        printf("\nNilai X2=%.3lf\n", X2);
    }
}

#include <stdio.h>
#include <math.h>

extern float suma(int a, int b);
extern float resta(int a, int b);
extern float mult(int a, int b); 
extern float expo(float a);
extern float calculaPi(void);
extern float potencia(int a, int b);
extern float coseno(float a);
extern float division(int a, int b);
extern float serietaylor(float a, int b);

extern int  menu(void);
int main(void)
{
        int val1, val2;
	float f1;
        float res=0.0;
        int opc;
        do{
          opc = menu();
          printf(" opcion: %d \n",opc);
          switch (opc)
          {
        case 1:
                printf("dame dos valores\n");
                scanf("%d",&val1);
                scanf("%d",&val2);
                res = suma(val1,val2);
                printf("La suma es %d\n",res);
                break;
	case 2:
                printf("dame dos valores\n");
                scanf("%d",&val1);
                scanf("%d",&val2);
                res = resta(val1,val2);
                printf("La resta es %d\n",res);
                break;
        case 3:
                printf("dame dos valores\n");
                scanf("%d",&val1);
                scanf("%d",&val2);
                res = mult(val1,val2);
                printf("La multiplicacion es %d\n",res);
                break;
	case 4:
                res = calculaPi();
                printf("PI es igual a: %d\n",res);
                break;
	case 5:
                printf("dame un valor\n");
                scanf("%f",&f1);
                res = expo(f1);
                printf("EL resultado es: %d\n",res);
                break;
	case 6:
                printf("dame dos valores\n");
                scanf("%d",&val1);
                scanf("%d",&val2);
                res = potencia(val1,val2);
                printf("La resultado es %d\n",res);
                break;
	case 7:
                printf("dame un valor\n");
                scanf("%f",&f1);
                res = coseno(f1);
                printf("EL resultado es: %d\n",res);
                break;
case 8:
                printf("dame dos valores\n");
                scanf("%d",&val1);
                scanf("%d",&val2);
                res = division(val1,val2);
                printf("La division es %d\n",res);
                break;
case 9:
                printf("dame dos valores\n");
                scanf("%f",&f1);
                scanf("%d",&val2);
                res = serietaylor(f1,val2);
                printf("El resultado es %d\n",res);
                break;
           case 10:
                break;
           default:
                  printf ("opcion no valida \n");
          }
        }while(opc!=9);
        return 0;

}
int menu(void)
{
        int opc=0;
    do
     {
        printf("Menu\n");
        printf("Opcion \n");
        printf("1-Suma \n2-Resta \n3-Multiplica\n4-Pi\n5-Exponencial\n6-Potenca\n7-Coseno\n8-Division\n9-Serie de Taylor\n");
        printf("10-Salir\n");
        if(scanf("%d",&opc)!=1)
        {
          printf("La opcion debe ser numerica, reintenta\n");
        }
        printf("----- %d \n",opc);
        while(getchar()!='\n');
    }while(opc == 0);   
    return opc;
}

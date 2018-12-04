#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

double F (double x)
{
    double f;
    f = pow((3.14 - x),0.1);
    return f;
}

double metod ( float a, double xi, float h, int i) // 
 {
    
    double S = 0,x; 
    h = 0.01; a=0.05;
	
	for(a; a < xi; a += h)
    {
      S += F(a + h * (i + 0.5)); //Вычисляем в средней точке и добавляем в сумму
    }
      S *= h;
    
	 return S;
}
	
   
main() 
{
    int N, i;
    float x, h = 0.01, a, b, S, S2, S3;
    double  fA, fB, fAB, xi;
 
	
	setlocale(LC_ALL,"Russian");
	system("color F0");
	
	printf("\n Начало интегрирования a= %.2f\n", a = 0.05);     // Вывод  значения а
	printf(" Конец интегрирования  b= %.2f\n", b = 0.14);   // Вывод  значения b
	
	N = (b - a) / h + 1;      // Рассчет кол.ва шагов
    printf(" N = %d", N);

    setlocale(LC_ALL,"C");
    printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,205,203,205,205,205,205,205,205,205,205,205,205,205,187);
	printf("\n%c",186);
	setlocale(LC_ALL,"Rus");
	printf("   x  ");
	setlocale(LC_ALL,"C");
	printf("%c",186);
	setlocale(LC_ALL,"Rus");
	printf("     Ypr    ");
	setlocale(LC_ALL,"C");
	printf("%c",186);
	setlocale(LC_ALL,"Rus");
	printf("    Yt     ");
	setlocale(LC_ALL,"C");
	printf("%c",186);
	printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",204,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,205,205,206,205,205,205,205,205,205,205,205,205,205,205,185);
	
	
	for ( i = 1; i < N ; i++ )   //  цикл табуляции
	  {
	  	 xi = a + (i * h);      //шаг табуляции
		 S2 = metod(a, xi, h, i);	// использование функции metod
		 S3 = S2 + S3;  
			     
        fA = 0.5 * log ((1 + pow(a,2)) / (1 - pow(a,2)));    // Расчет точного значения f(a)
        fB = 0.5 * log ((1 + pow(xi,2)) / (1 - pow(xi,2)));   // Расчет точного значения f(b)
        fAB = fB - fA;     // Расчет точного значения fAB

       printf("\n%c  %.1lf %c  %lf  %c  %lf %c", 186, xi, 186, S3, 186, fAB, 186);
      }
	
    setlocale(LC_ALL,"C");
	printf("\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,205,202,205,205,205,205,205,205,205,205,205,205,205,188);

	getch();
}

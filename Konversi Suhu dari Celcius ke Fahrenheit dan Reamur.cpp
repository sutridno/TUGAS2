#include <stdio.h>
#include <conio.h>

int main()
{
float c, r, f,k;
printf("                                   PROGRAM KONVERSI SUHU DARI CELCIUS KE :   \n");
printf("                                           FAHRENHEIT | REAMUR           \n");
printf("                                     SUTRISNO NIM 311620793\n");
printf("                                 INSTITUT PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
printf("Masukkan besar suhu dalam celcius : ");
scanf("%f", &c);
f=(c*1.8)+32;
printf("suhu dalam Farenheit : %.2f Farenheit\n", f);
r=(c*0.8);
printf("suhu dalam Rheamur : %.2f Rheamur\n", r);
getch();

}


#include<stdio.h>
#include<conio.h>
int main()
{

long detik,hd,jd,md ;
printf("                                       PROGRAM KONVERSI DETIK KE HARI, JAM, MENIT\n");
printf("                                           sutisno nim 311620793);
printf("                                       INSTITUT PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
printf("Masukkan Hari : "); scanf("%i",&hd);
detik=hd*24*60*60;
printf("Hasilnya adalah = %i\n",detik);
printf("Masukkan jam : "); scanf("%i",&jd);
detik=jd*60*60;
printf("Hasilnya adalah = %i\n",detik);
printf("Masukkan Menit : "); scanf("%i",&md);
detik=md*60;
printf("Satu hari adalah = %i\n",detik);
getch();
}



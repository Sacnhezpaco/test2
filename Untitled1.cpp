#include <stdio.h>
#include <conio.h>
main()
{
	int sueldo=0, b500=0, b200=0, b100=0, b50=0, b20=0, m10=0, m5=0, m2=0, m1=0;
	printf ("este programa te dice cuanto se necesita para pagarle al representante de ventas");
	
	printf ("pon el sueldo de el representante");
	scanf("%d", &sueldo);
	b500 = sueldo/500;
	sueldo = sueldo-(500*b500);
	b200 = sueldo/200;
	sueldo = sueldo-(200*b200);
	b100 = sueldo/100;
	sueldo = sueldo-(100*b100);
	b50 = sueldo/50;
	sueldo = sueldo-(50*b50);
	b20 = sueldo/20;
	sueldo = sueldo-(20*b20);
	m10 = sueldo/10;
	sueldo = sueldo-(10*m10);
	m5 = sueldo/5;
	sueldo = sueldo-(5*m5);
	m2-sueldo/2;
	sueldo = sueldo-(2*m2);
	m1 = sueldo/1;
	sueldo = sueldo-(1*m1);
	printf("se necesita pagar %d billetes de 500" , b500);
	printf("\n\n se necesita pagar %d billetes de 200" , b200);
	printf("\n\n se necesita pagar %d billetes de 100" , b100);
	printf("\n\n se necesita pagar %d billetes de 50", b50);
	printf("\n\n se necesita pagar %d billetes de 20", b20);
	printf("\n\n se necesita pagar %d monedas de 10", m10);
	printf("\n\n se necesita pagar %d monedas de 5", m5);
	printf("\n\n se necesita pagar %d monedas de 2", m2);
	printf("\n\n se necesita pagar %d monedas de 1", m1);
	printf("enter para terminar");
	getch();
}

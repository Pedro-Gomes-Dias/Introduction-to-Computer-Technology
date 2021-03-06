#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int fatorial (int n){
	int fat = 1;
	while (n > 1){
		fat = fat * n;
		n--;
	}
	return fat;
}
int exponencial (int n, int x){
	int exp;
	exp = pow(n,x);
		return exp;
}
int maxdiv(int x, int y){
		int resto = x%y;
	while(resto!=0){
		x = y;
		y = resto;
		resto = x%y;	
	}
	return y;
}
int main(){
	setlocale(LC_ALL, "portuguese");
	int menu = 0, n, x;
	int MAX_MENU = 3;
	while (menu <= 0 || menu > MAX_MENU){
		system("cls");
		printf("Escolha uma das opções: \n1-)Calcular fatorial.\n2-)Calcular exponencial.\n3-)Calcular máximo divisor comum.\n");
		scanf("%d", &menu);
			if(menu == 1){
				printf("\nDigite o número em que deseja aplicar o fatorial: \n");
				scanf("%d", &n);
				printf("\nResultado: %d", fatorial(n));
			}else{
				if(menu == 2){
					printf("\nDigite a base: ");
					scanf("%d", &n);
					printf("\nDigite o expoente: ");
					scanf("%d", &x);
					printf("\nResultado: %d", exponencial(n,x));	
				}else{
					if(menu == 3){
						printf("\nDigite o primeiro número: ");
						scanf("%d", &n);
						printf("Digite o segundo número: ");
						scanf("%d", &x);
						printf("\nResultado: %d", maxdiv(n,x));
					}
				}
			}
	}
	getch();
	return 0;
}

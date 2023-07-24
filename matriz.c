#include<stdio.h>
int main(){
	int c, cont, f, m, n, temp, matrix, matrix_1(3)(6);
	cont = 1;
	n = 1;
	
	for (f=0;f<=2;f+=1){
		for(c=0;c<=2;c+=1){
			printf("Ingresar valor %d de 9 : ",cont);
			scanf("%d",&matrix_1(f)(c));
			cont = cont+1;
		}
	}
	printf("\n");
	for(m=0;m<=2;m+=1){
		for(n=0;n<=2;n+=1){
			for(f=0;f<=2;f+=1){
				for(c=0;c<=2;c+=1){
					if (matrix_1(m)(n) < matrix_1(f)(c)){
						temp = matrix_1(m)(n);
						matrix_1(m)(n) = matrix_1(f)(c);
						matrix_1(f)(c) = temp;
						}
					}
				}
			}
		}
		for (f=0;f<=2;f+=1){
			printf("%d %d %d\n",matrix_1(f)(0),matrix_1(f)(1),matrix_1(f)(2));
		}
		return 0;
	}


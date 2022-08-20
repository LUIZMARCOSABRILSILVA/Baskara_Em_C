 Int main() {

    double a, b, c, delta, rd ,r1, r2;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a==0) {
        printf("Impossivel calcular\n");
    } else {
        delta = b*b - 4*a*c;
        if (delta<0) {
            printf("Impossivel calcular\n");
        } else {
            rd = sqrt(delta);
            r1 = (-b + rd) / (2 * a);
            r2 = (-b - rd) / (2 * a);
            printf("R1 = %.5lf\n",r1);
            printf("R2 = %.5lf\n",r2);
        }  return 0;

    }
    

#include <stdio.h> // libraria std
#include <math.h> // libraria math
 int main() {
    double a, b, c, delta, rd ,r1, r2;// declarando variaveis
    scanf("%lf %lf %lf", &a, &b, &c);// lendo dados numericos
    if (a==0) { //se a for igual a 0
        printf("Impossivel calcular\n"); // imprima impossivel calcular
    } else { // se nao 
        delta = b*b - 4*a*c; // 1pt da formula delta igual a b vezes b - 4 vezes a vezes c;
        if (delta<0) { // se delta maior que zero
            printf("Impossivel calcular\n"); // imprima impossivel calcular
        } else { // se nao 
            rd = sqrt(delta); // rd igual a sqrt (delta) sqrt e raiza quadrada na biblioteca math.h
            r1 = (-b + rd) / (2 * a); // r1 igual a menos b mais rd dividido por 2 vezes a
            r2 = (-b - rd) / (2 * a); // r2 igual a menenos b menos rd dividido por 2 vezes a 
            printf("R1 = %.5lf\n",r1); // imprimindo r1 raiz de baskara de r1
            printf("R2 = %.5lf\n",r2); // imprimindo raiz de baskara de r2
        }
    }
    return 0;
    
}

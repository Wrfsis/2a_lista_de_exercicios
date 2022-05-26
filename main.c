#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
ex041
Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo
com a tabela abaixo:
IMC Classificação
< 18,5 Abaixo do Peso
18,6 - 24,9 Saudável
25,0 - 29,9 Peso em excesso
30,0 - 34,9 Obesidade Grau I
35,0 - 39,9 Obesidade Grau II (severa)
>= 40,0 Obesidade Grau III (mórbida)
*/

/*
int main(){

    float p, h, imc;

    printf("Digite o peso: ");
    scanf("%f", &p);
    printf("Digite a altura: ");
    scanf("%f", &h);

    imc = (p/(h*h));

    printf("%f", imc);

    if(imc<18.5){
        printf("\n\nAbaixo do Peso.\n\n");
    }else{
        if(imc>=18.6 && imc<=24.9){
            printf("\n\nSaudavel.\n\n");
        }else{
            if(imc>=25.0 && imc<=29.9){
                printf("\n\nPeso em excesso.\n\n");
            }else{
                if(imc>=30.0 && imc<=34.9){
                    printf("\n\nObesidade Grau I.\n\n");
                }else{
                    if(imc>=35 && imc<=29.9){
                        printf("\n\nObesidade Grau II (severa).\n\n");
                    }else{
                        if(imc>40.0){
                            printf("\n\nObesidade Grau III (morbida).\n\n");
                        }
                    }
                }
            }
        }
    }

        return 0;
}
*/

/*
ex040
O custo ao consumidor de um carro novo é a soma do custo de fábrica, da comissão do
distribuidor, e dos impostos. A comissão e os impostos são calculados sobre o custo de fábrica,
de acordo com a tabela abaixo. Leia o custo de fábrica e escreva o custo ao consumidor.
CUSTO DE FÁBRICA                 % DO DISTRIBUIDOR    % DOS IMPOSTOS
até R$12.000,00                          5                isento
entre R$12.000,00 e R$25.000,00         10                  15
acima de R$25.000,00                    15                  20
*/

/*
int main(){

    float cusfa;

    printf("Digite o custo de fabrica do carro: R$");
    scanf("%f", &cusfa);

    if(cusfa<12000){
        printf("\n\nO custo ao consumidor e igual a: R$%.2f\n\n", cusfa*1.05);
    }else{
        if(cusfa>=12000 && cusfa<25000){
            printf("\n\nO custo ao consumidor e igual a: R$%.2f\n\n", (cusfa*1.1)*1.15);
        }else{
            if(cusfa>=25000){
                printf("\n\nO custo ao consumidor e igual a: R$%.2f\n\n", ((cusfa*1.15)*1.2));
            }
        }
    }

    return 0;
}
*/


/*
ex039
Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que
considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor
salário terão um aumento proporcionalmente maior do que os funcionários com um salário
maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus
adicional de salário. Faça um programa que leia:
 o valor do salário atual do funcionário;
 o tempo de serviço desse funcionário na empresa (número de anos de trabalho na
empresa).
Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do
salário final reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum
aumento.
Salário Atual        Reajuste (%)           Tempo de Serviço                 Bônus
Até 500,00                25%               Abaixo de 1 ano                 Sem bônus
Até 1000,00              20%                   De 1 a 3 anos                 100,00
Até 1500,00             15%                     De 4 a 6 anos                200,00
Até 2000,00             10%                     De 7 a 10 anos                  300,00
Acima de 2000,00    Sem reajuste                   Mais de 10 anos                 500,00
*/

/*
int main(){

    float sal;
    int tser;

    printf("Digite o Salario: R$");
    scanf("%f", &sal);
    printf("Digite o seu tempo de servico em anos: ");
    scanf("%d", &tser);

    if(sal<=500){
        if(sal<=500&&tser<=1){
            printf("\n\nO novo salario sera: R$%.2f\n\n", sal*1.25);
        }
        if(sal<=500 && tser>1 && tser<=3){
            printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.25)+100);
        }
        if(sal<=500 && tser>=4 && tser<=6){
            printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.25)+200);
        }
        if(sal<=500 && tser>=7 && tser<=10){
            printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.25)+300);
        }
        if(sal<=500 && tser>10){
            printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.25)+500);
        }

    }else{
        if(sal>500&&sal<=1000){
            if(sal>500&&sal<=1000&&tser<=1){
                printf("\n\nO novo salario sera: R$%.2f\n\n", sal*1.20);
            }
            if(sal>500&&sal<=1000 && tser>1 && tser<=3){
                printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.20)+100);
            }
            if(sal>500&&sal<=1000 && tser>=4 && tser<=6){
                printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.20)+200);
            }
            if(sal>500&&sal<=1000 && tser>=7 && tser<=10){
                printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.20)+300);
            }
            if(sal>500&&sal<=1000 && tser>10){
                printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.20)+500);
            }

        }else{
            if(sal>1000&&sal<=1500){
                if(sal>1000&&sal<=1500&&tser<=1){
                    printf("\n\nO novo salario sera: R$%.2f\n\n", sal*1.15);
                    }
                    if(sal>1000&&sal<=1500 && tser>1 && tser<=3){
                        printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.15)+100);
                    }
                    if(sal>1000&&sal<=1500 && tser>=4 && tser<=6){
                        printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.15)+200);
                    }
                    if(sal>1000&&sal<=1500 && tser>=7 && tser<=10){
                        printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.15)+300);
                    }
                    if(sal>1000&&sal<=1500 && tser>10){
                        printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.15)+500);
                    }

                }else{
                    if(sal>1500&&sal<=2000){
                        if(sal>1500&&sal<=2000&&tser<=1){
                            printf("\n\nO novo salario sera: R$%.2f\n\n", sal*1.10);
                        }
                        if(sal>1500&&sal<=2000 && tser>1 && tser<=3){
                            printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.10)+100);
                        }
                        if(sal>1500&&sal<=2000 && tser>=4 && tser<=6){
                            printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.10)+200);
                        }
                        if(sal>1500&&sal<=2000 && tser>=7 && tser<=10){
                            printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.10)+300);
                        }
                        if(sal>1500&&sal<=2000 && tser>10){
                            printf("\n\nO novo salario sera: R$%.2f\n\n", (sal*1.10)+500);
                        }

                    }else{
                        if(sal>2000){
                            if(sal>2000&&tser<=1){
                                printf("\n\nO novo salario sera: R$%.2f\n\n", sal);
                                }
                                if(sal>2000 && tser>1 && tser<=3){
                                    printf("\n\nO novo salario sera: R$%.2f\n\n", sal+100);
                                }
                                if(sal>2000 && tser>=4 && tser<=6){
                                    printf("\n\nO novo salario sera: R$%.2f\n\n", sal+200);
                                }
                                if(sal>2000 && tser>=7 && tser<=10){
                                    printf("\n\nO novo salario sera: R$%.2f\n\n", sal+300);
                                }
                                if(sal>2000 && tser>10){
                                    printf("\n\nO novo salario sera: R$%.2f\n\n", sal+500);
                                }
                            }
                        }
                    }
                }
            }

    return 0;
}
/*


/*
ex38
Leia uma data de nascimento de uma pessoa fornecida através de três números inteiros: Dia,Mês e Ano.
Teste a validade desta data para saber se está é uma data válida.
Teste se o dia fornecido é um dia válido: dia > 0, dia <= 28 para o mês de fevereiro (29 se o ano for bissexto),
dia <= 30 em 4, 6, 9 e 11, dia <= 31 nos outros meses.
Teste a validade do mês: mês > 0 e mês < 13.
Teste a validade do ano: ano <= ano atual (use uma constante definidacom o valor igual a 2022).
Imprimir: “data válida” ou “data inválida” no final da execução do programa.
*/


int main(){

    int dia, mes, ano, mais100;

    printf("Digite o ano de nascimento com 4 digitos(ex.:2022): ");
    scanf("%d", &ano);
    printf("Digite o mes de nascimento com 2 digitos(ex.:01): ");
    scanf("%d", &mes);
    printf("Digite o dia de nascimento com 2 digitos(ex.:01): ");

    if(((ano>1000&&ano<2022)&&(mes=02&&dia>00&&dia<=28))||((ano%4==0&&ano% 100!=0)||((ano% 400==0))&&(ano>0&&ano<=2022))&&(mes=02&&dia>00&&dia<=29) || (mes=04||mes=06||mes=09||mes=11&&dia>0&&dia<=30||) || (mes=01||mes=03||mes=05||mes=07||mes=08||mes=10||mes=12&&dia>0&&dia<=31)){
        printf("Data valida para ano bissexto");
    }else{
        if
    }









        if(((ano%4==0)&&(ano% 100!=0))||(ano% 400==0))&&mes==02dia<=29)





    }else{
        printf("Nao e uma data valida!!");



    return 0;


}









/*
ex028
Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das
seguintes médias de acordo com um valor numérico digitado pelo usuário:
(a) Geométrica: 3√𝑥 ∗ 𝑦 ∗ 𝑧
(b) Ponderada: [(1∗𝑥)+(2∗𝑦)+(3∗𝑧)]/3
(c) Harmônica: 1/( 1/𝑥+1/𝑦+1𝑧
(d) Aritmética: (𝑥+𝑦+𝑧)/3
*/

/*
int main(){

    int x, y, z;
    char ch;


    printf("Escolha uma opcao para calcular o tipo de media.\n\n");
    printf(" a   para Geometrica\n");
    printf(" b   para Ponderada\n");
    printf(" c   para Harmonica\n");
    printf(" d   para Aritmetica\n");
    printf("Digite uma opcao: ");
    scanf("%c", &ch);

    if(ch=='a'||ch=='b'||ch=='c'||ch=='d'){
        printf("Digite um valor para x: ");
        scanf("%d", &x);
        printf("Digite um valor para y: ");
        scanf("%d", &y);
        printf("Digite um valor para z: ");
        scanf("%d", &z);

        switch(ch){
            case 'a':
                printf("\n\nA media Geometrica dos valores %d, %d, %d e igual a: %.2f\n\n", x, y, z, (pow((x*y*z),1.0/3.0))); break;
            case 'b':
                printf("\n\nA media Ponderada dos valores %d, %d, %d e igual a: %.2f\n\n", x, y, z, (((1.0*y)+(2.0*y)+(3.0*z))/3.0)); break;
            case 'c':
                printf("\n\nA media Harmonica dos valores %d, %d, %d e igual a: %.2f\n\n", x, y, z, (1.0/((1.0/x)+(1.0/y)+(1.0/z)))); break;
            case 'd':
                printf("\n\nA media Aritmetica dos valores %d, %d, %d e igual a: %.2f\n\n", x, y, z, (x+y+z)/3.0); break;


        }
    }else{
        printf("\n\nDigite um valor valido!\n\n");
    }

    return 0;
}
*/


/*
ex027
Escreva um programa que, dada a idade de um nadador, classifique-o em uma das seguintes
categorias:
Categoria     Idade
Infantil A   5 a 7
Infantil B   8 a 10
Juvenil A    11 a 13
Juvenil B    14 a 17
Sênior       maiores de 18 anos
*/

/*
int main(){

    int id;

    printf("Digite a idade: ");
    scanf("%d", &id);

    if(id>=5 && id<7){
        printf("\n\nInfantil A\n\n");
    }else{
        if(id>=7 && id<10){
            printf("\n\nInfantil B\n\n");
        }else{
            if(id>=11 && id<13){
                printf("\n\nJuvenil A\n\n");
            }else{
                if(id>=14 && id<17){
                    printf("\n\nJuvenil B\n\n");
                }else{
                    if(id>=17){
                    printf("\n\nSenior\n\n");
                    }
                }
            }
        }
    }

    return 0;
}
*/


/*
ex026
Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um
percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
CONSUMO       (Km/l)          MENSAGEM
menor que       8          Venda o carro!
entre         8 e 14         Econômico!
maior que        14       Super econômico!
*/

/*
int main(){

    float dis, qtl, kml;

    printf("Digite a distancia em km: ");
    scanf("%f", &dis);
    printf("Digite a quantidade de litros: ");
    scanf("%f", &qtl);

    kml = dis / qtl;

    if(kml<8){
        printf("\n\nVenda o Carro!\n\n");
    }else{
        if(kml>7.9 && kml<14){
            printf("\n\nEconomico!\n\n");
        }else{
            if(kml>13.9){
                printf("\n\nSuper econominco!\n\n");
            }
        }
    }

    return 0;
}
*/

/*
ex025
Calcule as raízes da equação de 2º grau.
Lembrando que:
𝑥 = −𝑏 ± √delta/2𝑎
Onde
delta = 𝑏2 − 4𝑎𝑐
E ax2 + bx + c = 0 representa uma equação do 2º grau.
A variável a tem que ser diferente de zero. Caso seja igual, imprima a mensagem “Não é
equação de segundo grau”.
 Se delta < 0, não existe real. Imprima a mensagem “Não existe raiz”.
 Se delta = 0, existe uma raiz real. Imprima a raiz e a mensagem “Raiz única”.
 Se delta >= 0, imprima as duas raízes reais.
*/

/*
int main(){

    float a, b, c, del, r1, r2;

    printf("Digite um valor para a: ");
    scanf("%f", &a);
    printf("Digite um valor para b: ");
    scanf("%f", &b);
    printf("Digite um valor para c: ");
    scanf("%f", &c);

    del = pow(b, 2)- 4 * a * c;
    r1 = ((-1*b)+sqrt(del))/2 * a;
    r2 = ((-1*b)-sqrt(del))/2 * a;

    if(del < 0){
        printf("\n\nNao exite raiz.\n\n");
    }else{
        if(del==0){
            printf("\n\nRaiz unica, %.1f, %.1f.\n\n", r1, r2);
        }else{
            if(del>0){
                printf("\n\nDuas raizes reais, %.1f, %.1f.\n\n", r1, r2);
            }
        }
    }

    return 0;
}
*/


/*
ex024
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui
uma taxa diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um
programa em que o usuário entre com o valor e o estado destino do produto e o programa
retorne o preço final do produto acrescido do imposto do estado em que ele será vendido. Se o
estado digitado não for válido, mostrar uma mensagem de erro.
*/

/*
int main(){

    int est;
    float vpr;

    printf("Escolha o estado de destino do produto.\n\n");
    printf("Digite 1 para MG.\n");
    printf("Digite 2 para SP.\n");
    printf("Digite 3 para RJ.\n");
    printf("Digite 4 para MS.\n");
    printf("Qual estado de destino: ");
    scanf("%d", &est);

    if(est<5){
        printf("\n\nQual o valor do produto: ");
        scanf("%f", &vpr);

        switch(est){
        case 1:
            printf("\n\nO valor final do produto para MG e: R$%.2f\n\n", vpr*1.07); break;
        case 2:
            printf("\n\nO valor final do produto para SP e: R$%.2f\n\n", vpr*1.12); break;
        case 3:
            printf("\n\nO valor final do produto para RJ e: R$%.2f\n\n", vpr*1.15); break;
        case 4:
            printf("\n\nO valor final do produto para MS e: R$%.2f\n\n", vpr*1.08); break;
        }

    }else{
        printf("\n\nDigite um valor valido!!\n\n");
    }


    return 0;
}
*/


/*
ex023
Determine se um determinado ano lido é bissexto. Sendo que um ano é bissexto se for
divisível por 400 ou se for divisível por 4 e não for divisível por 100. Por exemplo: 1988, 1992,
1996
*/

/*
int main(){

    int a;

    printf("Digite o ano: ");
    scanf("%d", &a);

    if(a%400==0 || a%4==0 && a%100!=0){
        printf("\n\nO ano e Bissexto!\n\n");
    }else{
        printf("\n\nO ano digitado nao e Bissexto.\n\n");
    }

    return 0;
}
*/


/*
ex022
Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se
aposentar. As condições para aposentadoria são
 Ter pelo menos 65 anos;
 Ou ter trabalhado pelo menos 30 anos;
 Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos
*/

/*
int main(){

    int id, tser;

    printf("Digite a idade: ");
    scanf("%d", &id);
    printf("Digite o tempo de servico em anos: ");
    scanf("%d", &tser);

    if(id>64 || tser>29 || id>59 && tser>24){
        printf("\n\nPode aposentar\n\n");
    }else{
        printf("\n\nNao pode aposentar\n\n");
        }

    return 0;
}
*/


/*
ex021
Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida.
Escreva uma mensagem de erro se a opção for inválida.
Escolha a opção:
1- Soma de 2 números.
2- Diferença entre 2 números (maior pelo menor).
3- Produto entre 2 números.
4- Divisão entre 2 números (o denominador não pode ser zero).
Opção
*/

/*
int main(){
    int n;
    float n1, n2;

    printf("Escolha a opcao:\n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros\n");
    printf("4- Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    printf("Opcao: ");
    scanf("%d", &n);

    printf("\n\nDigite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    switch(n){
    case 1:
        printf("\n\n%.2f + %.2f = %.2f\n\n", n1, n2, n1+n2); break;
    case 2:
        if(n1>n2){
            printf("\n\n%.2f - %.2f = %.2f\n\n", n1, n2, n1-n2); break;
        }else{
            printf("\n\n%.2f - %.2f = %.2f\n\n", n2, n1, n2-n1); break;
        }
        ;
    case 3:
        printf("\n\n%.2f * %.2f = %.2f\n\n", n1, n2, n1*n2); break;
    case 4:
        if(n2>0){
            printf("\n\n%.2f + %.2f = %.2f\n\n", n1, n2, n1/n2); break;
        }

    }
       return 0;
}
*/



/*
ex020
Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se forem, se é um triângulo escaleno, equilátero ou isósceles, considerando os seguintes
conceitos:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados;
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes;
*/

/*
int main(){

    int a, b, c;

    printf("Digite um valor para o lado A: ");
    scanf("%d", &a);
    printf("Digite um valor para o lado B: ");
    scanf("%d", &a);
    printf("Digite um valor para o lado C: ");
    scanf("%d", &c);

    if(b+c>a && c+a>b && a+b>c){
        printf("\n\nOs lados digitados formam triangulo.\n");
        if(a==b==c){
            printf("Esse triangulo e equilatero.\n\n");
        }else{
            if(a==b || b==c || c==a){
                printf("Esse triangulo e isosceles.\n\n");
            }else{
                printf("Esse triangulo e escaleno.\n\n");
                }
            }
        }else{
            printf("\n\nOs valores digitados nao formam triangulo.\n\n");
        }

    return 0;
}
*/


/*
ex019
Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5,
mas, não simultaneamente pelos dois
*/

/*
int main(){

    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n%3==0 && n%5==0){
        printf("\n\nDigite outro numero, esse e divisivel por 3 e 5.\n\n");
        }else{
            if(n%3==0){
                printf("\n\nO numero e divisivel por 3\n\n");
                }
                if(n%5==0){
                    printf("\n\nO numero e divisivel por 5\n\n");
                }
        }


    return 0;

    }
*/


/*
ex018
Faça um programa que mostre ao usuário um menu com 4 opções de operações
matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa
então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo
*/

/*
int main(){

    int n;
    float n1, n2;

    printf("***Escolha uma das operacoes digitando um opcao valida***\n\n");
    printf("Digite 1 para soma.\n");
    printf("Digite 2 para subtracao.\n");
    printf("Digite 3 para multiplicacao.\n");
    printf("Digite 4 para divisao.\n\n");
    scanf("%d", &n);

        if(n >0 && n< 5){

            printf("\n\nDigite o primeiro valor: ");
            scanf("%f", &n1);
            printf("Digite o segundo valor: ");
            scanf("%f", &n2);


            switch( n ){
                case 1:
                    printf("\n\nA soma\n%.1f + %.1f = %.1f\n\n", n1, n2, n1+n2); break;
                case 2:
                    printf("\n\nA subtracao\n%.1f - %.1f = %.1f\n\n", n1, n2, n1-n2); break;
                case 3:
                    printf("\n\nA multiplicacao\n%.1f * %.1f = %.1f\n\n", n1, n2, n1*n2); break;
                case 4:
                    printf("\n\nA divisao\n%.1f / %.1f = %.1f\n\n", n1, n2, n1/n2); break;
            }

        }else{
            printf("\n\nDigite um valor valido!\n\n");
        }

    return 0;
}
*/


/*
ex017
Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
𝐴 =(basemaior + basemenor) ∗ altura / 2
*/

/*
int main(){

    float bsma, bsme, h;

    printf("Digite o valor de uma base: ");
    scanf("%f", &bsma);
    printf("Digite o valor da outra base: ");
    scanf("%f", &bsme);
    printf("Digite o valor da altura: ");
    scanf("%f", &h);

    if(bsma == bsme == h){
        printf("\n\nNao sao valores validos para base de um trapezio!!\n\n");
    }else{
        if(bsma <= 0 || bsme <= 0 || h <= 0){
            printf("\n\nNao sao valores validos para base de um trapezio!!\n\n");
        }else{
            printf("\n\nA area do trapezio e igual a: %.2f\n\n", (((bsma + bsme) * h)/2));
        }

    return 0;

    }
}
*/


/*
ex016
Usando switch, escreva um programa que leia um inteiro entre 1 e 12 e imprima o mês
correspondente a este número. Isto é, janeiro se 1, fevereiro se 2, e assim por diante
*/

/*
int main(){

    int num;

    printf("Digite um numero entre 1-12: ");
    scanf("%d", &num);

    switch( num ){
        case 1:
            printf("\n\nJaneiro.\n\n"); break;
        case 2:
            printf("\n\nFevereiro.\n\n"); break;
        case 3:
            printf("\n\nMarço.\n\n"); break;
        case 4:
            printf("\n\nAbril.\n\n"); break;
        case 5:
            printf("\n\nMaio.\n\n"); break;
        case 6:
            printf("\n\nJunho.\n\n"); break;
        case 7:
            printf("\n\nJulho.\n\n"); break;
        case 8:
            printf("\n\nAgosto.\n\n"); break;
        case 9:
            printf("\n\nSetembro.\n\n"); break;
        case 10:
            printf("\n\nOutubro\n\n"); break;
        case 11:
            printf("\n\nNovembro.\n\n"); break;
        case 12:
            printf("\n\nDezembro.\n\n"); break;
        default :
            printf("\n\nDigite um valor valido.\n\n"); break;
    }

    return 0;

}
*/


/*
ex015

Usando switch, escreva um programa que leia um inteiro entre 1 e 7 e imprima o dia da
semana correspondente a este número. Isto é, domingo se 1, segunda-feira se 2, e assim por
diante.
*/

/*
int main(){
    int num;

    printf("Digite um numero entre 1 e 7: ");
    scanf("%d", &num);

    switch( num ){
        case 1:
            printf("\nDomingo.\n"); break;
        case 2:
            printf("\nSegunda.\n"); break;
        case 3:
            printf("\nTerca.\n"); break;
        case 4:
            printf("\nQuarta.\n"); break;
        case 5:
            printf("\nQuinta.\n"); break;
        case 6:
            printf("\nSexta.\n"); break;
        case 7:
            printf("\nSabado.\n"); break;
        default:
            printf("\n\nNao eh um valor valido.\n\n");
    }

    return 0;

}
*/


/*
ex014

A nota final de um estudante é calculada a partir de três notas atribuídas entre o intervalo
de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um
exame final. A média das três notas mencionadas anteriormente obedece aos pesos: Trabalho
de Laboratório: 2; Avaliação Semestral: 3; Exame Final: 5. De acordo com o resultado, mostre na
tela se o aluno está reprovado (média entre 0 e 2,9), de recuperação (entre 3 e 4,9) ou se foi
aprovado. Faça todas as verificações necessárias
*/

/*
int main(){

    float tlab, asem, efin, med;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f", &tlab);
    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &asem);
    printf("Digite a nota do Fxame Final: ");
    scanf("%f", &efin);

    med = (tlab * 2 + asem * 3 + efin * 5) / ( 2 + 3 + 5 );

    if(med < 3){
        printf("\n\nA media das notas foi %.2fptos, REPROVADO!\n\n", med);
    }else{
        if(med >= 3 && med <  5){
        printf("\n\nA media das notas foi %.2fptos, RECUPERACAO!\n\n", med);
        }else{
        printf("\n\nA media das notas foi %.2fptos, APROVADO!\n\n", med);
        }
    }

 return 0;

}
*/


/*
ex013

Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Ao final, mostrar a média do estudante e
indicar se o estudante foi aprovado ou reprovado. A nota para aprovação deve ser igual ou
superior a 60 pontos.
*/

/*
int main(){

    float not1, not2, not3, medp;

    printf("Digite o valor da primeira nota: ");
    scanf("%f", &not1);
    printf("Digite o valor da segunda nota: ");
    scanf("%f", &not2);
    printf("Digite o valor da terceira nota: ");
    scanf("%f", &not3);

    medp = (not1*1 + not2*1 + not3 * 2)/(1 + 1 + 2);

    if(medp < 60){
        printf("\n\nA media das notas das provas foi %.2fptos, voce foi REPROVADO!\n\n", medp);
    }else{
        printf("\n\nA media das notas das provas foi %.2fptos, voce foi APROVADO!\n\n", medp);
    }

    return 0;

}
*/


/*
ex012

Ler um número inteiro. Se o número lido for negativo, escreva a mensagem “Número
inválido”. Se o número for positivo, calcular o logaritmo deste número
*/
/*
int main(){

    int num;
    float log;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if(num < 0){
        printf("\n\nNumero invalido!!\n\n");
    }else{
        printf("\n\nO logaritmo de %d e: %.2f\n\n", num, log10(num));
    }

    return 0;

}
*/


/*
ex011

Escreva um programa que leia um número inteiro maior do que zero e devolva, na tela, a
soma de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5
+ 1). Se o número lido não for maior do que zero, o programa terminará com a mensagem:
“Número inválido”
*/

/*
int main(){

    int n, nu, nd, nc;

    printf("Digite um numero inteiro com 3 algarismos(001-999): ");
    scanf("%i", &n);


    if(n > 0){

        nc = n / 100;
        nd = n % 100 / 10;
        nu = n % 100 % 10;
        n = nc + nd + nu;

        printf("\n\nA soma dos algarismos do numero digitado e igual a: %i\n\n", n);
    }else{
        printf("\n\nNumero invalido!!\n\n");
    }

    return 0;

}
*/




/*
ex010

Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso
ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
 Homens: (72,7 * h) – 58,0
 Mulheres: (62,1 * h) – 44,7
*/

/*
int main(){

    float h;
    char sex;

    printf("Informe a altura: ");
    scanf("%f", &h);
    printf("Informe o sexo (F para feminino, M para masculino): ");
    fflush(stdin);
    scanf("%c", &sex);

    if(sex == 'f'){sex = 'F';}
    //??sex = sex == 'f' ? 'f' : 'F';
    if(sex == 'm'){sex = 'M';}
    //??sex = sex == 'm' ? 'm' : 'M';

    if(sex == 'F'){
        printf("\n\nO peso ideal para uma mulher com %fm de altura e: %fkg\n\n", h, (62.1 * h) - 44.7);
    }else{
        if(sex == 'M'){

            printf("\n\nO peso ideal para um homem com %fm de altura e: %fkg\n\n", h, (72.7 * h) - 58.0);
        }else{
            printf("\n\nDigite um valor valido para sexo!\n\n");
        }
    }

    return 0;
}
*/



/*
ex09

 Leia o salário de um trabalhador e o valor da prestação de um empréstimo. Se a prestação for
maior que 20% do salário imprima: “Empréstimo não concedido”, caso contrário imprima:
“Empréstimo concedido”
*/

/*
int main(){

    float sal, emp, par, pre;

    printf("Informe o valor do salario: ");
    scanf("%f", &sal);
    printf("Informe o valor do emprestimo: ");
    scanf("%f", &emp);
    printf("Informe quantas parcelas: ");
    scanf("%f", &par);

    pre = sal / par;

    if(pre < (0.2*sal)){
        printf("\n\nEmprestimo concedido!!\n\n");
    }else{
        printf("\n\nEmprestimo nao consedido!!\n\n");
    }

    return 0;
}
*/




/*
ex08

Faça um programa que leia 2 notas de um aluno, verifique se as notas são válidas e exiba na
tela a média destas notas. Uma nota válida deve ser, obrigatoriamente, um valor entre 0.0 e
10.0, onde caso a nota não possua um valor válido, este fato deve ser informado ao usuário e o
programa termina.
*/

/*
int main(){

    float n1, n2;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    if(n1 > 0 && n2 > 0){
        printf("\n\nA media das notas e igual a: %.2f\n\n", (n1 + n2)/2.0);
    }else{
        if(n1 < 0 && n2 < 0){
            printf("\n\nAs duas notas sao invalidas.\n\n");
        }else{
            if(n1 < 0){
                printf("\n\nA nota %.2f e invalida.\n\n", n1);
            }else{
                printf("\n\nA nota %.2f e invalilda.\n\n", n2);

            }
        }
    }

    return 0;
}
*/



/*
ex07

Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números
forem iguais, imprima a mensagem: “Números iguais”
*/

/*
int main(){

    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if(n1 == n2){
        printf("\n\nNumeros iguais\n\n");
    }else{
        if(n1 > n2){
            printf("\n\nO numero %.1f e o maior.\n\n", n1);
        }else{
            printf("\n\nO numero %.1f e o maior.\n\n", n2);
        }
    }

    return 0;
}
*/



/*
ex06

 Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim
como a diferença existente entre ambos.
*/

/*
int main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        printf("\n\nO numero %d e maior que o numero %d\n", n1, n2);
    }else{
        printf("\n\nO numero %d e maior que o numero %d\n", n2, n1);
    }

    printf("A diferenca entre %d e %d e igual a: %d\n\n", n1, n2, n1 - n2);

    return 0;
}
*/



/*
ex05

Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar
*/

/*
int main(){

    int n1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    if(n1 % 2 == 0){
        printf("\n\nO numero %d e par.\n\n", n1);
    }else{
        printf("\n\nO numero %d e impar.\n\n", n1);
    }

    return 0;
}
*/



/*
ex04

Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
 O número digitado ao quadrado
 A raiz quadrada do número digitado
*/

/*
int main(){

    float n1;

    printf("Digite um numero: ");
    scanf("%f", &n1);

    if(n1>0){
        printf("\n\nO quadrado do numero %.1f e igual a: %.1f\n", n1, pow(n1, 2));
        printf("A raiz quadrada do numero %.1f e igual a: %.1f\n\n", n1, sqrt(n1));
    }else{
        printf("\n\nNumero invalido!!\n\n");
    }

    return 0;
}
*/



/*
ex03

Leia um número real. Se o número for positivo imprima a raiz quadrada. Do contrário, imprima
o número ao quadrado.
*/

/*
int main(){

    float n1;

    printf("Digite um numero real: ");
    scanf("%f", &n1);

    if(n1>0){
        printf("\n\nA raiz quadrada do numero %.1f e igual a: %.1f\n\n", n1, sqrt(n1));
    }else{
        printf("\n\nO quadrado do numero %.1f e igual a: %.1f\n\n", n1, pow(n1, 2));
    }

    return 0;
}
*/



/*
ex02

Leia um número fornecido pelo usuário. Se esse número for positivo, calcule a raiz quadrada
do número. Se o número for negativo, mostre uma mensagem dizendo que o número é inválido.
*/

/*
int main(){

    float n1;

    printf("Digite um numero positivo: ");
    scanf("%f", &n1);

    if(n1>0){
        printf("\n\nA raiz quadrada do numero %.1f, e igual a: %.1f\n\n", n1, sqrt(n1));
    }else{
        printf("\n\nO numero e invalido!!\n\n");
    }

    return 0;
}
*/



/*
ex01

Faça um programa que receba dois números e mostre qual deles é o maior
*/

/*
int main(){

    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("digite o segundo numero: ");
    scanf("%f", &n2);

    if(n1 > n2){
        printf("O numero %.1f e maior que o numero %.1f", n1, n2);

    }else{
        printf("O numero %.1f e maior que o numero %.1f", n2, n1);
    }

    return 0;
}
*/

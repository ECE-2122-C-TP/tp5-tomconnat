//
// Created by tomco on 04/10/2021.
//

#include "exercice.h"
#include "fonction.h"
#define MAX 100
#define MAX2 12

void Exercice1(){
    struct NombreRationnel nb1 = SaisirNombreRationnel();
    struct NombreRationnel nb2 = SaisirNombreRationnel();
    struct NombreRationnel nb3 = Multiplication(nb1, nb2);
    struct NombreRationnel nb4 = Addition(nb1, nb2);
    afficherNombreRationnel(nb1);
    afficherNombreRationnel(nb2);
    afficherNombreRationnel(nb3);
    afficherNombreRationnel(nb4);
}

void Exercice2(){
    int nbtot;
    int nb;
    int tab[MAX];
    printf("saisir le nombre d'entiers a rentrer :\n");
    scanf("%d",&nbtot);
    for (int i = 1; i < nbtot + 1; ++i) {
        printf("saisir l'entier pour la case : %d\n", i);
        scanf("%d", &nb);
        tab[i] = nb;
        printf("%d : %d\n", i , tab[i]);
    }
}

void exercice3(){
    int cpt = 1;
    int nb;
    int k = 0;
    int tab3x4[3][4];
    int tab12[MAX2];
    for (int i = 0; i<3; ++i){
        for (int j = 0; j < 4 ; ++j) {
            printf("saisir nombre a inserer : (%d/12)\n", cpt++);
            scanf("%d", &nb);
            tab3x4[i][j] = nb;
        }
    }
    printf("Voici le tableau 3x4 : \n");
    for(int i =0; i <3; ++i){
        for(int j = 0; j < 4; ++4){
            printf("%d", tab3x4[i][j]);
        }
        printf("\n");
    }
    for (int  i = 0;  i < 3 ; ++ i) {
        for (int j = 0; j < 4; ++j) {
            tab12[k] = tab3x4[i][j];
            ++k;
        }
        printf("Voici le tableau a une dimension qui copie celui a deux dimensions : \n");
        for (int j = 0; j < MAX2 ; ++j) {
            printf ("%d", tab12[j]);

        }
}
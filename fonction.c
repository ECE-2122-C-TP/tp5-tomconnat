//
// Created by tomco on 04/10/2021.
//
#include <stdio.h>
#include "fonction.h"

struct NombreRationnel SaisirNombreRationnel(){
    struct NombreRationnel nb1;

    printf("saisissez le numerateur:\n");
    scanf("%d", &nb1.numerateur);
    printf("saisissez le denominateur:\n");
    scanf("%d", &nb1.denominateur);
    return nb1;

}

void afficherNombreRationnel(struct NombreRationnel nb1){
    printf("votre nombre : %d/%d\n", nb1.numerateur, nb1.denominateur );
}

struct NombreRationnel Multiplication(struct NombreRationnel nb1, struct NombreRationnel nb2){
    struct NombreRationnel nb3;
    nb3.numerateur = nb1.numerateur * nb2.numerateur;
    nb3.denominateur = nb1.denominateur * nb2.denominateur;
    return nb3;
}

struct NombreRationnel Addition(struct NombreRationnel nb1, struct NombreRationnel nb2){
    struct NombreRationnel nb4;
    nb4.numerateur = nb1.numerateur * nb2.denominateur + nb2.numerateur * nb1.denominateur;
    nb4.denominateur = nb1.denominateur * nb2.denominateur;
    return nb4;
}

int PGCD(NombreRationnel nb1){
    int DivCommun = 0;
    int PlusPetit = 0;
    if(nb1.numerateur < nb1.denominateur){
        PlusPetit = nb1.numerateur;
    }else if(nb1.numerateur > nb1.denominateur){
        PlusPetit = nb1.denominateur;
    }else{
        DivCommun = nb1.denominateur:
        return DivCommun;
    }
    for(int i = PlusPetit; i > 1; --i){
        if(nb1.denominateur % i == 0 && nb1.numerateur % i == 0){
            DivCommun = i;
            return DivCommun;
        }else if((nb1.numerateur % i != 0 || nb1.denominateur % i !=0) && (i == 2)){
            return 0;
        }
    }
}
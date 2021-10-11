//
// Created by tomco on 04/10/2021.
//

#ifndef TP5_FONCTION_H
#define TP5_FONCTION_H

typedef struct NombreRationnel{
    int numerateur;
    int denominateur;
}NombreRationnel;

struct NombreRationnel SaisirNombreRationnel();

void afficherNombreRationnel(struct NombreRationnel nb1);

struct NombreRationnel Multiplication(struct NombreRationnel nb1, struct NombreRationnel nb2);
struct NombreRationnel Addition(struct NombreRationnel nb1, struct NombreRationnel nb2);

#endif //TP5_FONCTION_H

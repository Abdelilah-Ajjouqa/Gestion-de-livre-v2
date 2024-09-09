#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{
    char titre[100];
    char auteur[100];
    int prix;
    int quantite;
}livre;

livre tab[100];
int compteur;
void Ajouter()
{
    int x;
    Again:
    printf("Vous voulez quois ?\n");
    printf("1-Ajouter un livre.\n2-Ajouter plusieurs livres\n3-Retoure\n");
    scanf("%d",&x);
    if(x<1 || x>3)
        printf("Veuillez selectionner sauf les choix entre 1-3 !\n");
    do{
        switch(x){
   case 1:{
       char titre[100],auteur[100];
       int prix, quantite;
    printf("Entrez le titre de livre : ");
    scanf("%s", titre);
    printf("\nEntrez le nom de l'auteur de livre : ");
    scanf("%s", auteur);
    printf("\nEntrez le prix de livre : ");
    scanf("%d",&prix);
    printf("\nEntrez la quantite que vous pouvez poser : ");
    scanf("%d",&quantite);
    printf("Le livre est ajouté avec succees");
    compteur++;
    goto Again;
    break;}
        }

      }while(x==0);
}

int main()
{
    int choix;
    printf("~~~~~~~~~~~~~Welcome~~~~~~~~~~~~\n");
    Start:
    printf("Veuillez selectionner un choix se dessous:\n");
    printf("1-Ajouter.\n2-Modifier.\n3-Supprimer\n4-Rechercher.\n5-Trier.\n6-Statut\n\n00-Quitter.\n");
    scanf("%d",&choix);
    if(choix>6 || choix<0)
    {
        printf("Veuillez selectionner sauf un choix entre 0-6!\n");
        goto Start;
    }
    switch(choix)
    {
    case 1:
        Ajouter();
        break;
    }
}

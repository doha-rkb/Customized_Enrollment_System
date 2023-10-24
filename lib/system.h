#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "..//lib/temp.h"
#ifndef SYSTEM_H
#define SYSTEM_H

typedef struct Etudiant
{
    char cne[10];
    char nom[20];
    char prenom[20];
    char filiere[30];
    int annee;
    char email[30];
   
}Etudiant;
Etudiant etud;
void menu_presentation(){
       
	system("color 2");
	printf("\n\n\n");
      temp();
      printf("\n");
	printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t::\t\t\t\t\t\t\t\t::\n");
	printf("\t\t:.\t ----Systeme de Gestion d'Inscription ENSAH----\t\t.:\n");
	printf("\t\t::\t\t     Interface Administration\t\t\t::\n");
	printf("\t\t::\t\t                             \t\t\t::\n");
	printf("\t\t::    Developpee Par : Rakib Douha, Wiran Larbi, Wiam Touhami\t::\n");
	printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");


}

void menu(){
  
	//system("color 2");
	printf("\n\n\n");
      temp();
      printf("\n");
	printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
	printf("\t\t::\t\t\t\t\t\t\t\t::\n");
	printf("\t\t:.\t ----Systeme de Gestion d'Inscription ENSAH----\t\t.:\n");
	printf("\t\t::\t\t     Interface Administration\t\t\t::\n");
	printf("\t\t::\t\t\t\t\t\t\t\t::\n");
	printf("\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");

}
void FileReload(FILE *fp){
	 int cnt=fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
        if(cnt ==-1){
    fprintf(fp,"SD09874\t\tADMIN\t\tADMIN\t\tCP\t\t7\t\tadmin.admin@mail.mail\n");
		}
		else{
			return;
		}

}


#endif

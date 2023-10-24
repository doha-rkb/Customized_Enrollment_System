#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

#include "lib/system.h"
#include "lib/funct.h"


void InitializationEtud(Etudiant *etu){
	 strcpy(etu->cne,"0");
	 strcpy(etu->nom,"0");
	 strcpy(etu->prenom,"0");
    etu->annee = 0;
	 strcpy(etu->filiere,"0");
	 strcpy(etu->email,"0");
}
int main(int argc, char const *argv[])
{
    system("cls");
    InitializationEtud(&etud);
    menu_presentation();
    FILE *fp;
    fp = fopen("etudiant.txt","a+");
    FileReload(fp);
    fclose(fp);
          chrono(); 
          system("pause");
            password:
          system("cls");
          menu();

    //? Variable Global
     int choix;
     int voir;
     int active=0;
     int returnMenu = 0;
  
//! ADMINISTRATION CHECK 
     
       char buffer[20];
       char readpass[20];
      printf("\n\n\t\t\tEntrer le Mot de Passe Administratif :: ");
       int p=0; 
                do{ 
                    buffer[p]=getch(); 
                    if(buffer[p]!='\r'){ 
                        printf("*"); 
                    } 
                  p++; 
                }while(buffer[p-1]!='\r'); 
                buffer[p-1]='\0';
                FILE *pas;
                pas = fopen("password.txt","r+");
                 int state = fscanf(pas,"%s",readpass);
        if(strcmp(buffer,readpass)==0) 
             active = 1;
               
        else{
           system("cls");
            menu();
            system("color 4");
           printf("\t\t\t Mot de Pass Eronée :(  ");
           printf("\n\t\t Try Again...");
           system("pause.bat");
           goto password;
        }
    //???????????????
    if(active!=0){
             menu:
             Sleep(20);
             system("cls");
             menu();
         printf("\n\t\t 1 - Ajouter un Etudiant ");
         printf("\n\t\t 2 - Modifier un Etudiant");
         printf("\n\t\t 3 - Afficher les Etudiants enregistres");
         printf("\n\t\t 4 - Rechercher un Etudiant");
         printf("\n\t\t 5 - Supprimer un Etudiant");
         printf("\n\t\t 6 - Liste des Etudiants Supprimes");
         printf("\n\t\t 7 - Modifier le Mot de Passe");
         printf("\n\t\t 0 - Quitter ");
      	printf("\n\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
         printf("\n\t\t.::. Entrez votre choix :: ");
         scanf("%d",&choix);
         //! menu des choix
         switch (choix)
         {
         case 1:{
               system("cls");
               menu_presentation();
               InitializationEtud(&etud);
               system("color 9");
               //*********************************
               FILE *fp = fopen("etudiant.txt","aw+");
	                                    printf("\n\t\t=================================================================\n");
	                               			printf("\t\t\t\t ENREGISTREMENT  ETUDIANT   \n");
                                    	printf("\t\t=================================================================\n\n");  
               if(!fp){
                   perror(" Fichier Introuvable !");
                   exit(1);
               }
                  int nbEtudiant = -1;
                  printf("\t\t\t Saisir le Nombre d'Etudiants a enregistrer :: ");
                  scanf("%d",&nbEtudiant);
                  int count = 1;
                  while (count<=nbEtudiant)
                  {
                       printf("\nEntrer Les informations de L'Etudiant Numero %d :: \n",count);
                       ajoutEtudiant(fp);
                       count++;
                  }
                  fclose(fp);
                //*********************************
                  system("cls");
                  menu();
                  system("color 3");
                  printf("\n\t\t Revenir au menu 1/0 :: ");
                  scanf("%d",&returnMenu);
                                  if(returnMenu == 1){
                                   goto menu;
                                     }
                                  if(returnMenu == 0){
                                    goto sort;
                                  }
                  exit(1);
                  break;
            }
        case 2:{
               system("cls");
               menu();
                InitializationEtud(&etud);
               system("color 7");
               //***********************************
               char CNE_temp[20];
               printf("\n\n\t\t\t Entrer Le CNE de l'Etudiant a Modifier ::  ");
               scanf("%s",CNE_temp);
               FILE *fp;
               fp = fopen("etudiant.txt","r+");
               modifier(fp,CNE_temp);
              //************************************
              system("cls");
                         menu();
                         system("color 3");
                                       printf("\n\t\t Revenir  au menu 1/0 :: ");
                                                scanf("%d",&returnMenu);
                                          if(returnMenu == 1){
                                   goto menu;
                                     }
                                  if(returnMenu == 0){
                                    goto sort;
                                  }
                        exit(1);
                        break;
        }
          
        case 3:{
                  system("cls");
                  menu();
                 InitializationEtud(&etud);
                  system("color 3");
                                   	printf("\n\t\t=================================================================\n");
	                               			printf("\t\t\t\t\t AFFICHAGE  ETUDIANTS   \n");
                                    	printf("\t\t=================================================================\n\n");
                  printf("\t\t\t1- Par filiere\n\t\t\t2- Par annee\n\n");
                  printf("\t\tAfficher par :: ");
                  scanf("%d", &voir);
                  switch(voir){
                         case 1:{
                                     system("cls");
                                     menu();
                                     system("color 3");
                                     printf("\n\t\t\t\t Liste des Etudiants Inscrits\n");
                                     printf("\t\t\t\t\t-- Par Filiere --\n");
                                     //******************************************
                                     FILE *fp= fopen("etudiant.txt","r");
                                     if(fp==NULL){
                                                    printf ("Impossible d'ouvrir le fichier");
                                                    exit(1);
                                                    }
                                        affichParFilliere(fp);
                                     system("pause");
                                      fclose(fp);
                                      //******************************************
                         system("cls");
                         menu();
                         
                         system("color 3");
                                       printf("\n\t\t Retourner au menu 1/0 :: ");
                                                scanf("%d",&returnMenu);
                                          if(returnMenu == 1){
                                   goto menu;
                                     }
                                  if(returnMenu == 0){
                                    goto sort;
                                  }
                            exit(1);
                            break;
                         }
                         case 2:{

                                      system("cls");
                                      menu();
                                      InitializationEtud(&etud);
                                      system("color 3");
                                    printf("\t\t\t Liste des Etudiants Inscrits\n");
                                    printf("\t\t\t\t\t-- Par Annee --\n");
                                    //*****************************************
                                        FILE *fp= fopen("etudiant.txt","r");
                                             if(fp==NULL){
                                              printf ("Impossible d'ouvrir le fichier");
                                              exit(1);
                                              }
                                           affichParAnnee(fp);
                                           system("pause");
                                             fclose(fp);
                            system("cls");
                            menu();
                            system("color 3");
                            printf("\n\t\t Revenir au menu 1/0 :: ");
                             scanf("%d",&returnMenu);
                                 if(returnMenu == 1){
                                   goto menu;
                                     }
                                  if(returnMenu == 0){
                                    goto sort;
                                  }
                                     exit(1);
                                     break;
                        }
                  default:{
                    	printf("\nEntrer un choix Correct !\n\n");
				      printf("Voulez vous continuer ? (O|N) ");				

				       char ch =getch();	
								if(ch=='o'||ch=='O'){
									goto menu;									
								}else if(ch=='n'||ch=='N'){
									goto sort;
								}else{
									system("pause.bat");
									exit(1);
								}		
                          exit(1);
                        break;
                 }
           }
        }

        case 4:{ 
                                    system("cls");
                                      menu();
                                     InitializationEtud(&etud);
                                      system("color 7");
                                    	printf("\n\t\t=================================================================\n");
	                               			printf("\t\t\t\t\t RECHERCHE D'UN  ETUDIANT   \n");
                                    	printf("\t\t=================================================================\n\n");
                                    //*****************************************
                                        FILE *fp= fopen("etudiant.txt","r");
                                             if(fp==NULL){
                                              printf ("Impossible d'ouvrir le fichier");
                                              exit(1);
                                              }
                                              char CNE[20];
                                              printf("\t\t\tDonner le CNE de l Etudiant a chercher : ");
                                              scanf("%s",CNE);
                                              int trouve = recherche(fp,CNE);
                                              system("pause");
                                              
                                    //*****************************************
                                system("cls");
                                menu();
                            system("color 3");
                            printf("\n\t\t Retourner au menu 1/0 :: ");
                             scanf("%d",&returnMenu);
                                 if(returnMenu == 1){
                                   goto menu;
                                     }
                                    if(returnMenu == 0)
                                     goto sort;
                                     exit(1);
                                     break;
        }  
          case 5:{
            
                                    system("cls");
                                      menu();               
                                      InitializationEtud(&etud);
                                      system("color 7");
                                  	printf("\n\t\t=================================================================\n");
	                               			printf("\t\t\t\t\t SUPPRESION D'UN ETUDIANT   \n");
                                    	printf("\t\t=================================================================\n\n");
                                    //*********************************************
                                       FILE *fp= fopen("etudiant.txt","r");
                                             if(fp==NULL){
                                              printf ("Impossible d'ouvrir le fichier");
                                              exit(1);
                                              }
                                              char CNE[20];
                                              printf("\n\n\t\t\tDonner le CNE de l Etudiant a Supprimer : ");
                                              scanf("%s",CNE);
                                              supprimer(fp,CNE);
											   fclose(fp);
                                              remove("etudiant.txt");
	                                          rename("tempor.txt","etudiant.txt");
                                            
                                      //********************************************
                                 system("cls");
                                menu();
                            system("color 3");
                            printf("\n\t\t Retourner au menu 1/0 :: ");
                             scanf("%d",&returnMenu);
                                 if(returnMenu){
                                   goto menu;
                                     }
                                     exit(1);
                                              break;
          }
          case 6:{
                                      system("cls");
                                      menu();               
                                      InitializationEtud(&etud);
                                      system("color 4");
                                    	printf("\n\t\t=================================================================\n");
	                               			printf("\t\t\t\t\t LISTE DES ETUDIANTS SUPPRIMES   \n");
                                    	printf("\t\t=================================================================\n\n");
                                    //*********************************************
                                      FILE *fp= fopen("corbeille.txt","r");
                                       if(fp==NULL){
                                              printf ("Impossible d'ouvrir le fichier");
                                              exit(1);
                                              }
                                              AffichageListabandonner(fp);
                                              fclose(fp);
                                    //**********************************************
                                     system("pause");
                                      system("cls");
                                menu();
                            system("color 3");
                            printf("\n\t\t Revenir au menu 1/0 :: ");
                             scanf("%d",&returnMenu);
                                 if(returnMenu){
                                   goto menu;
                                 }
                                 exit(1);
                                   break;
          } case 7:{
                                      system("cls");
                                      menu();               
                                      system("color 7");
                                    	printf("\n\t\t=================================================================\n");
	                               			printf("\t\t\t\tModification du Mot de Passe   \n");
                                    	printf("\t\t=================================================================\n\n");
                                    //*********************************************
                                      FILE *fp= fopen("password.txt","r+");
                                       if(fp==NULL){
                                              printf ("Impossible d'ouvrir le fichier");
                                              exit(1);
                                              }
                                              char ancienPass[20];
                                              char holder[20];
                                             printf("\t\t\tS'il vout Plait Entrer l'ancien Mot de Passe : ");
                                             scanf("%s",ancienPass);
                                             fscanf(fp,"%s",holder);
                                             if(strcmp(holder,ancienPass) == 0){ 
                                                     system("cls");
                                                      menu();                             
                                                       system("color 7");
                                    	                 printf("\n\t\t=================================================================\n");
	                               			                 printf("\t\t\t\tModification du Mot de Passe   \n");
                                    	                 printf("\t\t=================================================================\n\n");
                                                       printf("\n\t\t Entrer le Nouveau Mot de Passe :: ");
                                                       scanf("%s",holder);
                                                       FILE *fr; 
                                                       fr = fopen("password.txt","w");
                                                       if(!fr){
                                                           perror("Impossible d'ouvrir les Fichiers !");
                                                           exit(1);
                                                       }
                                                       fprintf(fr,"%s",holder);
                                                       int cnt2;
                                                       cnt2 = fscanf(fp,"%s",holder);
                                                       if(cnt2 != -1)
                                                         printf("\t\tLe Mot de Passe est Modifie avec Succes : ) !");
                                                       fclose(fr);

                                               }

                                              fclose(fp);
                                    //**********************************************
                                     system("pause");
                                      system("cls");
                                menu();
                            system("color 3");
                            printf("\n\t\t Revenir au menu 1/0 :: ");
                             scanf("%d",&returnMenu);
                                 if(returnMenu){
                                   goto menu;
                                 }
                                 exit(1);
                                   break;
          }
          case 0:{
                  sort:
                 system("cls");
                 system("color 5");
                 menu_presentation();
                 printf("\n\n\n\t\t ========================== Au Revoir ! ===========================\n\n\n");
                 printf("En train ...");
                  Fin();
                  return 0;
                  break;
          }
            default:{
            	printf("\nEntrer un choix Correct !\n\n");
				      printf("Voulez vous continuer ? (O|N) ");				

				       char ch =getch();	
								if(ch=='o'||ch=='O'){
									goto menu;									
								}else if(ch=='n'||ch=='N'){
									goto sort;
								}else{
									system("pause.bat");
									exit(1);
								}		
              break;      
        }
         }
    }
 return 0;
    }
   

   

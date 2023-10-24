#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "..//lib/system.h"
#ifndef FUNCTION_H
#define FUNCTION_H

void ajoutEtudiant(FILE *fp){
       
      printf("CNE :: ");
      scanf("%s",etud.cne);
      printf("Prenom :: ");
      scanf("%s",etud.prenom);
      printf("Nom :: ");
      scanf("%s",etud.nom);
      
      printf("Filiere :: [CP,GI,GC,GEE,GEER,DATA,GM]  ");
      scanf("%s",etud.filiere);
      printf("Anne d'etude :: ");
      scanf("%d",&etud.annee);
      printf("Adresse Email :: ");
      scanf("%s",etud.email);
      printf("\n\n\t\t ::   Verifier Vos Informations  \n\n");
      printf("Nom et Prenom :: %s %s \t CNE :: %s , filiere :: %s ,Annee Etude :: %d,Email :: %s  \n",etud.nom,etud.prenom,etud.cne,etud.filiere,etud.annee,etud.email);
      int valid; 
        printf("\t\t Pour Valider (1) \n\t\tModifier (2) :: ");
        scanf("%d",&valid);
        if(valid == 1){
			FILE * fh;
             time_t t;
             time(&t);
			fh = fopen("historique.txt","a+");
			char CNE_HISTORIQUE[20] ;
			strcpy(CNE_HISTORIQUE,etud.cne);
            fprintf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
			fprintf(fh,"L'etudiant  de CNE %s a été ajouter  :: operation effectuee a :  %s \n",CNE_HISTORIQUE,ctime(&t));
            	printf("\n    ========= Etudiant enregistrer !=========\n\n");
				system("pause.bat");
			fclose(fh);
        }
        else{
             ajoutEtudiant(fp);
        }
}

int affichParFilliere(FILE *fp){
			
            int f;
			int flag = 0;
			int afficher = 0;
	    	printf("Choisir la filiere:\n\t\t1. CP\n\t\t2. GI\n\t\t3. GC\n\t\t4. GEE\n\t\t5. GEER\n\t\t6. DATA\n\t\t7. GM \n");
              printf("\t\t\tEntrer Votre Choix :: ");
        scanf("%d",&f);	
        switch (f){
            case 1:{ // CYCLE PREPA
			 //! Historique Update
							  FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiants du Cycle Preparatoire  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);	
							  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1
			     flag = 0;
			     
				while(2){
				               			
							int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",&etud.cne,&etud.nom,&etud.prenom,&etud.filiere,&etud.annee,&etud.email);
							if(cnt==-1)
							  break;
							  
						    else {
								if(stricmp(etud.filiere,"CP")==0){
								if(flag == 0){
									  printf("\n=================================================================\n");
							  		  printf("\t\tCYCLE PREPARATOIRE\n");
								      printf("=================================================================\n");
								      printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
						}
								printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
								flag++;
								}
							  }
						}
                               
					          
						  
               						    
			                  if(flag == 0) {
								  	printf("\n=================================================================\n");
							  		printf("\t\tLISTE CP EST  VIDE  \n");
	                               printf("=================================================================\n");
								   return 0;
							  }  
							  break;    
			}
            case 2: //GI
				{
					 //! Historique Update
							  FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiants du Cycle d'Ingenieure GI  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);
							  //////////////////////////////////////////////////////		
					flag = 0;
					 
                    while(2){
				  int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",&etud.cne,&etud.nom,&etud.prenom,&etud.filiere,&etud.annee,&etud.email);
							if(cnt==-1)
							  break;
							  else {
							  
							  	if(stricmp(etud.filiere,"GI")==0){
							  
									 if(flag == 0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tGENIE INFORMATIQUE\n");
								printf("=================================================================\n");
								printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
						}
							
							
								printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
								flag++;
									 }
									
						     }
			 		}					    
					  if(flag == 0) {
								  	printf("\n=================================================================\n");
							  		printf("\t\tLISTE GI EST  VIDE  \n");
	                               printf("=================================================================\n");
								   return 0;
							  }   
							  break;   
                     }
                    
                case 3: //GC
                {
					//! Historique Update
							  FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiants du Cycle d'Ingenieure GC  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);		
							  ////////////////////////////////////////////////////////
					flag = 0;				    
				   while(2){
				      int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",&etud.cne,&etud.nom,&etud.prenom,&etud.filiere,&etud.annee,&etud.email);
							if(cnt==-1)
							  break;
							else {
							
							  	if(stricmp(etud.filiere,"GC")==0){
							           if(flag == 0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tGENIE CIVIL\n");
								printf("=================================================================\n");
								printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
								        }
									  	printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);

										 flag++;
									  
										         
						       }
					    }
						
						}
						 if(flag == 0) {
								  	printf("\n=================================================================\n");
							  		printf("\t\tLISTE GC EST  VIDE \n");
	                               printf("=================================================================\n");
								   return 0;
							  }
							 break;       
                    }
                
                 case 4: //GEE
                 {
					 	//! Historique Update  
						    FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiants du Cycle d'Ingenieure GEE  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);
							  ////////////////////////////////////////////
					 flag = 0;
				while(2){
							int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",&etud.cne,&etud.nom,&etud.prenom,&etud.filiere,&etud.annee,&etud.email);
							if(cnt==-1)
							  break;
							else{
							  	if(stricmp(etud.filiere,"GEE")==0){
							         if(flag == 0){
							  	     	printf("\n=================================================================\n");
							  			printf("\t\tGENIE EAU ET ENVIRONNEMENT\n");
								        printf("=================================================================\n");
										printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
								 }
									 
								printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
								              flag++;     
						                   }
					       }
						}
					
						    if(flag == 0){
								  	printf("\n=================================================================\n");
							  		printf("\t\tLISTE GEE EST  VIDE \n");
	                               printf("=================================================================\n");
								   return 0;
							  } 
							  break;      
                       }
                 
                 	case 5: //GEER
                      {
						  //! Historique Update  
					  FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiants du Cycle d'Ingenieure GEER  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);	
							  ////////////////////////////////////////
						  flag = 0;
				while(2){
							int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",&etud.cne,&etud.nom,&etud.prenom,&etud.filiere,&etud.annee,&etud.email);
							if(cnt==-1)
							  break;
						    else{
							  	if(stricmp(etud.filiere,"GEER")==0){
							         if(flag == 0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tGENIE ENERGITIQUE ET ENERGIES RENOUVLABLE \n");
								printf("=================================================================\n");
								printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
								} 
							
										printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
							         	flag++;
						    }
					      }
                     }
					  if(flag == 0) {
								  	printf("\n=================================================================\n");
							  		printf("\t\tLISTE GEER EST VIDE \n");
	                               printf("=================================================================\n");
								   return 0;
							  } 
				     break;     
                      }
                      case 6: //data
                      {
						  //! Historique Update  
						  FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiant du Cycle d'Ingenieure DATA  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);	
							  ////////////////////////////////////////////
						  flag = 0;
				     while(2){
						int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",&etud.cne,&etud.nom,&etud.prenom,&etud.filiere,&etud.annee,&etud.email);
							if(cnt==-1)
							  break;
							  else {
							
							  	if(stricmp(etud.filiere,"DATA")==0 ){
						           if(flag == 0){
							  		printf("\n=================================================================\n");
							  			printf("\t\t INGENIERIE DES DONNEES\n");
								printf("=================================================================\n");
								printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
								    }
								printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
							    flag++;  
						      }
					     }  }
						
						  if(flag == 0) {
								  	printf("\n=================================================================\n");
							  		printf("\t\tLISTE DATA EST VIDE  \n");
	                               printf("=================================================================\n");
								   return 0;
							  }
							  break;      
                          }
                      
                       case 7: //GM
                       {
						   //! Historique Update  
					   FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh," Un affichage des Etudiants du Cycle d'Ingenieure GM  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);
							  //////////////////////////////////////
						   flag = 0;
				        while(2){
						int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",&etud.cne,&etud.nom,&etud.prenom,&etud.filiere,&etud.annee,&etud.email);
							if(cnt==-1)
							  break;
							else {
							  	if(stricmp(etud.filiere,"GM")==0 ){
							  	      if(flag == 0){
							  		printf("\n=================================================================\n");
							  			printf("\t\tGENIE MECANIQUE\n");
								printf("=================================================================\n");
								printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
								 	}
								printf("%s\t%s\t%s\t%s\t%d\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
								 flag++;
									
										       
						     }	}
					   }
					    if(flag == 0) {
								  	printf("\n=================================================================\n");
							  		printf("\t\tLISTE GM EST VIDE \n");
	                               printf("=================================================================\n");
								   return 0;
							  }
							  break;      
                         }
                       default :
					           printf("\t\t CHOIX INVALIDE !");
                                return 0;
                             break;
        }
}
void affichParAnnee(FILE *fp){
     int a = 0;
	 int flag = 0;
	    	printf("\t\tChoisir l'Annee:  \n\n\t\t\t 1. Premiere Annee \n\t\t\t 2. Deuxieme Annee\n\t\t\t 3. Troisieme Annee\n\t\t\t 4. Quatrieme Annee\n\t\t\t 5. Cinquieme Annee");
			  printf("\n\n\n\t\tEntrer votre choix :: ");
                scanf("%d",&a);	
        switch(a){
            case 1:{
					//! Historique Update  
							  FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiants du Premiere Annee   effectue a :: %s\n",ctime(&t));
							  fclose(fh);
							  ////////////////////////////////////////////
				int yr1=0;
			 while(3){  
               	  int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
							if(cnt==-1)
							  break;
							  	if(etud.annee==1)
							  		if(yr1==0){
							  		printf("\n=================================================================\n");
							  	     printf("\t\tPremiere Annee\n");
								     printf("=================================================================\n");
								     printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
                                               }
								     printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);	
							     	yr1++;
					             }
				    break;
                   }
                 
            case 2:{
				//! Historique Update   
					    FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiants du Deuxieme Annee  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);
							  ////////////////////////////////////
				 int yr2=0;	
			 while(3){	
				 int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
							if(cnt==-1)
							  break;
                                   else{
							  	if(etud.annee==2){
							  		if(yr2==0){
							  		printf("\n=================================================================\n");
							  		printf("\t\tDeuxieme Annee\n");
								     printf("=================================================================\n");
								     printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
                                               }
								  printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
								    yr2++;
					                 }
                                    }
                       }
						
					   break;
                }
             
				case 3:{
					//! Historique Update  
					    FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh,"Un affichage des Etudiant du Troisieme Annee  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);
							  //////////////////////////////////////
					int yr3=0;	
			 while(3){ 			
				 int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
							if(cnt==-1)
							  break;
                                   else{
							  	if(etud.annee==3){
							  		if(yr3==0){
							  		printf("\n=================================================================\n");
							  		printf("\t\tTroisieme Annee\n");
								     printf("=================================================================\n");
								     printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
                                               }
								  printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
								    yr3++;
					                 }
                                    } 								
                       }	
						
					   break;
                }
                   
				case 4:{
					//! Historique Update  
					   FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh," Un Affichage des Etudiant du Quatreme Annee  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);
							  //////////////////////////////////
					int yr4=0;	
				 while(3){
				 			
				 int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
							if(cnt==-1)
							  break;
                                   else{
							  	if(etud.annee==4){
							  		if(yr4==0){
							  		printf("\n=================================================================\n");
							  		printf("\t\tQuatrieme Annee\n");
								     printf("=================================================================\n");
								     printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
                                               }
								  printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
								    yr4++;
					                 }
                                    }
                       }	
						
					   break;
				}
				case 5:{
					//! Historique Update  
					    FILE * fh;
                              time_t t;
                              time(&t);
			                  fh = fopen("historique.txt","a+");
							  fprintf(fh," UN affichage des Etudiants du Cinquieme Annee  :: operation effectuee a :  %s\n",ctime(&t));
							  fclose(fh);
							  //////////////////////////////////////
					int yr5=0;	
                          while(3){
				 			 int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
							if(cnt==-1)
							  break;
                                   else{
							  	if(etud.annee==5){
							  		if(yr5==0){
							  		printf("\n=================================================================\n");
							  		printf("\t\tCinquieme Annee\n");
								     printf("=================================================================\n");
								     printf("\nCNE\t\tNom\t\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
                                               }
								  printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
								    yr5++;
					                 }
                                    }
                       }
							
					   break;
			    }

                default:
                      break;
   } 
}

int recherche(FILE*fp,char CNE[20]){
		//! Historique Update  
            FILE * fh;
             time_t t;
             time(&t);
			fh = fopen("historique.txt","a+");
			char CNE_HISTORIQUE[20] ;
			strcpy(CNE_HISTORIQUE,CNE);
			fprintf(fh,"une recherche de l'etudiant ayant le CNE  %s  :: operation effectuee a :  %s  \n",CNE_HISTORIQUE,ctime(&t));
			fclose(fh);
			/////////////////////////////////////////
	int trouv = 1;
    int temp = 0;
        while(3){
		int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
		if(cnt == -1)
		 exit(1);
		if(stricmp(etud.cne,CNE)==0){	
			printf("\n\t\t=================================================================\n");
			printf("\t\t\t\t\tETUDIANT TROUVE \n");
	        printf("\t\t=================================================================\n");
			printf("\nCNE\t\tNom\tPrenom\t\tFiliere\t\tAnnee\t\tEmail\n\n");
		 printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
		 temp++;
		 return 1;
			}		
}
	
if(temp==0){
	printf("\n\t\t=================================================================\n");
							  		printf("\t\tETUDIANT INTROUVABLE \n");
	printf("\t\t=================================================================\n");
	return 0;
}
		
	
}

void supprimer(FILE*fp,char CNE[20]){
		//! Historique Update  
            FILE * fh;
             time_t t;
             time(&t);
			fh = fopen("historique.txt","a+");
			char CNE_HISTORIQUE[20] ;
			strcpy(CNE_HISTORIQUE,CNE);
			fprintf(fh,"l'etudiant ayant le CNE  %s a ete supprime  :: operation effectuee a :  %s \n",CNE_HISTORIQUE,ctime(&t));
			fclose(fh);
			////////////////////////////////////
	int temp=0;
	FILE*ft1=NULL;
	ft1=fopen("tempor.txt","a+");
	FILE*ft2=NULL;
	ft2=fopen("corbeille.txt","a+");
	if(ft1==NULL || ft2 == NULL)
	printf("impossible d ouvrir les fichier !!");
	else{
      while(3){
               int cnt = fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
               if(cnt == -1)
	             break;
                if(stricmp(etud.cne,CNE)!=0)
                  fprintf(ft1,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
                 else {
                    fprintf(ft2,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
                     temp++;
				 }
        }

	 fclose(fp);
     fclose(ft1);
     fclose(ft2);
      if(temp==0){
	printf("\n=================================================================\n");
				printf("\t\tETUDIANT INTROUVABLE \n");
	printf("=================================================================\n");	
      }else{
		  printf("\n=================================================================\n");
				printf("\t\tETUDIANT SUPPRIME AVEC SUCCES \n");
	printf("=================================================================\n");	
	 system("pause.bat");
	  }

}
		
	
}
void modifier(FILE *fp,char CNE[20]){
		//! Historique Update  
	     FILE * fh;
             time_t t;
             time(&t);
			fh = fopen("historique.txt","a+");
			char CNE_HISTORIQUE[20] ;
			strcpy(CNE_HISTORIQUE,CNE);
			fprintf(fh," l'etudiant ayant le CNE  %s a ete modifie  :: operation effectuee a :   %s  \n",CNE_HISTORIQUE,ctime(&t));
			fclose(fh);
			////////////////////////////////////////
	int temp=0;
	FILE*fs=NULL;
	FILE*ft=NULL;
	fs=fopen("temporary.txt","r+");
    FileReload(fs);
	fclose(fs);
	
	ft = fopen("temporary.txt","a+");
 if(ft==NULL){
	printf("impossible d ouvrir le fichier !!");
         exit(1);
	}
      while(3){
                int cnt=fscanf(fp,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
               if(cnt ==-1)
	             break;
                if(stricmp(etud.cne,CNE)!=0)
                  fprintf(ft,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
                 else {
					  temp++;
					 printf("Les informations de l'etudiant a modifier : \n");
                    printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n\n\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
					  printf("\t\tCNE :: ");
    	  scanf("%s",etud.cne);
    	  printf("\t\tPrenom :: ");
    	  scanf("%s",etud.prenom);
      printf("\t\tNom :: ");
      scanf("%s",etud.nom);
      printf("\t\tFiliere :: [CP,GI,GC,GEE,GEER,DATA,GM]  ");
      scanf("%s",etud.filiere);
      printf("\t\tAnne d'etude :: ");
      scanf("%d",&etud.annee);
      printf("\t\tAdress Email :: ");
      scanf("%s",etud.email);
      printf("\n\n\t\t ::   Verifier Vos Informations  \n\n");
      printf("\tNom et Prenom :: %s %s \t CNE :: %s , filiere :: %s ,Annee Etude :: %d,Email :: %s  \n",etud.nom,etud.prenom,etud.cne,etud.filiere,etud.annee,etud.email);
      int valid; 
        printf("\t\t Pour ::\n\t\tValider (1) \n\t\tModifier (2) :: ");
        scanf("%d",&valid);
        if(valid == 1){
            fprintf(ft,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
            printf("\n=================================================================\n");
				printf("\t\tETUDIANT MODIFIE AVEC SUCCES \n");
	        printf("=================================================================\n");	
					system("pause.bat");
        }
				 }
        }
		 fclose(fp);
         fclose(ft);
	 remove("etudiant.txt");
	 rename("temporary.txt","etudiant.txt");
      if(temp==0){
	printf("\n=================================================================\n");
				printf("\t\tETUDIANT INTROUVABLE \n");
	printf("=================================================================\n");	
      }
		
	
}
void AffichageListabandonner(FILE *fb){
	//! Historique Update  
		  FILE * fh;
             time_t t;
             time(&t);
			fh = fopen("historique.txt","a+");
			char CNE_HISTORIQUE[20] ;
			fprintf(fh,"un affichage de la corbeille   :: operation effectuee a : %s \n",ctime(&t));
			fclose(fh);
			//////////////////////////////////
	int black = 0; 
	if(fb == NULL){
		perror("impossible d'ouvrir le fichier !");
		exit(1);
	}
    fscanf(fb,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
           while(2){
		 int cnt = fscanf(fb,"%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,&etud.annee,etud.email);
		 if(cnt == -1)
			 break;
		 else{
			 if(etud.annee == 1 || etud.annee == 2 || etud.annee == 3 || etud.annee == 4 || etud.annee == 5 ){
               printf("%s\t\t%s\t\t%s\t\t%s\t\t%d\t\t%s\n",etud.cne,etud.nom,etud.prenom,etud.filiere,etud.annee,etud.email);
			   black++;
			 }
		 }
		 }
		 if(black == 0){
			 printf("\n=================================================================\n");
				printf("\t\tLISTE VIDE ! \n");
	         printf("=================================================================\n");	
		 }
			
	
	 }


	





#endif 

#include<stdio.h>
#include<stdlib.h>

void creer_fichier(){
	
	int chiffre;
	char nom[20];
	FILE * fichier1;
	
	printf("\nSaisir le nom du fichier\n");
	scanf("%s",nom);
	fichier1 = fopen(nom,"w");
	printf("\nSaisir les chiffres\n");
	scanf("%i",&chiffre);
	
	while(chiffre!=-1){
		fprintf(fichier1,"%i ",chiffre);
		scanf("%i",&chiffre);
	}
	
	fclose(fichier1);
	printf("\n");
}

void afficher_fichier(){
	
	int num;
	char nom[20];
	FILE * fichier2;
	
	printf("Saisir le nom du fichier\n");
	scanf("%s",nom);
	fichier2 = fopen(nom,"r");
	printf("\n");
	
	if(fichier2 == NULL){ 
		printf("Le nom n'existe pas\n");
	} else {
	
		fscanf(fichier2,"%i",&num);
	
		while(!feof(fichier2)){
			printf("%i ",num);
			fscanf(fichier2,"%i",&num);
		}
		fclose(fichier2);
	}
	printf("\n");	
}


void main(){
	
	creer_fichier();
	afficher_fichier();

}

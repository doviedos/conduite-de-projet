#include<stdio.h>
#include<stdlib.h>

void afficher_fichier(){
	
	int num;
	char nom[20];
	FILE * fichier2;
	
	printf("Saisir le nom du fichier\n");
	scanf("%s",nom);
	fichier2 = fopen(nom,"r");
	fscanf(fichier2,"%i",&num);
	
	while(!feof(fichier2)){
		printf("%i ",num);
		fscanf(fichier2,"%i",&num);
	}
	
	printf("\n");
	fclose(fichier2);	
}


void main(){
	
	afficher_fichier();

}

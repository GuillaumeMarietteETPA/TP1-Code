#include <stdio.h>

int pvjoueur = 150;
int pvmonstre = 100;
int atk = 20;
int atkmonstre = 15;




int main (void) {
	printf("Un sanglier pas tres gentil vous barre la route !\n");
	printf("Que faite vous ?\n");
	
	
	scanf("%d", &atk);

		do {
	
			




	printf("Vous attaquer vaillament !\n");
	printf("Le sanglier perd %d PV\n", atk);

	pvmonstre = pvmonstre - atk;

	

						if (pvmonstre > 0) {
					printf("Il lui reste %d PV\n", pvmonstre);
					printf("Le sanglier riposte !\n");
					printf("Vous perdez %d PV\n", atkmonstre);

					pvjoueur = pvjoueur - atkmonstre;

					printf("Il vous reste %d PV\n", pvjoueur);

				}
						else  {
					printf("Il lui reste 0 PV\n");
				}	

			



	} 	

		while (pvmonstre > 0);
	
	printf("Le vilain sanglier est vaincu !\n");








return 0;

}
#include <stdio.h>

int pvjoueur = 200;
int pvmonstre = 100;
int atk = 40;
int atkmonstre = 30;
int def = 0;
int choix;



int main (void) {
	printf("Un sanglier pas tres gentil vous barre la route !\n");

	
		do {
			
				

			printf("Que faite vous ?\n");
			printf("Attaque[1] - Defense[2]\n");

			scanf("%d", &choix);

						if (choix==1) {



				printf("Vous attaquer vaillament !\n");
				printf("Le sanglier perd %d PV\n", atk);

				pvmonstre = pvmonstre - atk;

	

						if (pvmonstre > 0) {
					printf("Il lui reste %d PV\n", pvmonstre);
					printf("Le sanglier riposte !\n");
					printf("Vous perdez %d PV\n", atkmonstre);

					pvjoueur = pvjoueur - atkmonstre;

							if (pvjoueur > 0) {
							printf("Il vous reste %d PV\n", pvjoueur);
							}
							else {
							printf("Il vous reste 0 PV\n");
							printf("Vous etes mort...\n");
							break;
							}

				}
				
						else  {
					printf("Il lui reste 0 PV\n");
					printf("Le vilain sanglier est vaincu !\n");
					break;
				}	
			
		}



		if (choix==2) {
				
			
				
				


				printf("Vous brandisser votre bouclier !\n");
				
					def = atkmonstre / 4;
					pvjoueur = pvjoueur - def;


				if (pvjoueur > 0) {
				printf("Le sanglier charge sur vous et vous perdez %d PV\n", def);
				printf("Il vous reste %d PV\n", pvjoueur);
				}
				else {
				printf("Il vous reste 0 PV\n");
				printf("Vous etes mort...\n");
				break;
				}
			
		}
}
		while ((pvmonstre > 0) && (pvjoueur > 0));
		
	



	return 0;

}
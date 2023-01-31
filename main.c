#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine1[100],chaine2[100];
    int len1,len2,i,j,verifi,cool,choix;

    printf("\nBienvenu sur notre programme de v�rification d'anagramme\n");

    do {
        // Entr�e des deux chines de caract�res
        printf("\nVeuillez entrer une chaine de caract�res : ");
        scanf("%s",chaine1);
        printf("Entrer la deuxi�me chaine de caract�res : ");
        scanf("%s",chaine2);

        len1 = strlen(chaine1);
        len2 = strlen(chaine2);

        // Comparaison des caracrt�res constituants les chaines
        if (len1 != len2) {
            printf("Ces deux chaines ne sont pas des anagrammes");
        }
        else {
            verifi = 0;
            cool = 0;
            // On v�rifie si les caract�res de la chaine1 se trouvent dans la chaine2
            for (i=0;i<len1;i++) {
                for (j=0;j<len1;j++) {
                    if (chaine1[i] == chaine2[j]) {
                        verifi = 0;
                        break;
                    }
                    else {
                        verifi = 1;
                    }
                }
                if (verifi == 0) {
                    cool = cool + 0;
                }
                else {
                    cool = cool + 1;
                }
            }

            // Ensuite on v�rifie si les caract�res de la chaine2 se trouvent dans la chaine1
            for (i=0;i<len1;i++) {
                for (j=0;j<len1;j++) {
                    if (chaine2[i] == chaine1[j]) {
                        verifi = 0;
                        break;
                    }
                    else {
                        verifi = 1;
                    }
                }
                if (verifi == 0) {
                    cool = cool + 0;
                }
                else {
                    cool = cool + 1;
                }
            }


            if (cool == 0) {
                printf("\n%s et %s sont des anagrammes\n\n",chaine1,chaine2);
            }
            else {
                printf("\n%s et %s ne sont pas des anagrammes\n\n",chaine1,chaine2);
            }

        }

        printf("\nRecommencez ?\n");
        printf("1-Oui\n2-Non");
        printf("\nEntrez votre choix : ");
        scanf("%d",&choix);

    } while (choix != 2);

    printf("\nMerci d'avoir utilis� notre programme. Au revoir et � bientot !!!\n");

    return 0;
}

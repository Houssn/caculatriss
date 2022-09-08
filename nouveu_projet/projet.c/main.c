#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nom_de_etudient , prenom , cin , cne;
   float note1,note2,note3,note4,note5,note6,note7,moyenne;


        printf("donnee le nom:");
    scanf("%s",&nom_de_etudient);
        printf("donnee le prenom");
    scanf("%s",&prenom);
        printf("donnee le cin:");
    scanf("%s",&cin);
        printf("donnee le cne:");
    scanf("%s",&cne);
    printf("ecrire les 7 note:\n");
    scanf("%f%f%f%f%f%f%f",&note1,&note2,&note3,&note4,&note5,&note6,&note7);
    moyenne=(note1+note2+note3+note4+note5+note6+note7)/7;
    printf("le moyenne est:%f/n",moyenne);
    if(moyenne>10) {
   printf("sm valide");
} else {
   printf("sm non valide");
}



    return 0;
}

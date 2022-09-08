#include <stdio.h>
#include <stdlib.h>

int main()
{
   char nom_de_etudient , prenom , cin , cne;
   float note1,note2,note3,note4,note5,note6,note7,moyenne;


        printf("donnee le nom:");
    scanf("%s",&nom_de_etudient);
        printf("donnee le prenom:");
    scanf("%s",&prenom);
        printf("donnee le cin:");
    scanf("%s",&cin);
        printf("donnee le cne:");
    scanf("%s",&cne);
    printf("ecrire les 7 note:\n");
    scanf("%f%f%f%f%f%f%f",&note1,&note2,&note3,&note4,&note5,&note6,&note7);
    moyenne=(note1+note2+note3+note4+note5+note6+note7)/7;
    printf("le moyenne est:%f\n",moyenne);
    if(moyenne>10&&moyenne<12) {
   printf("sm valide on mention passable");
} else {if(moyenne>=12&&moyenne<14){

   printf("sm valide on mention");}else{if(moyenne>=14&&moyenne<16){
   	printf("sm valide on mention bien");
   }else{if(moyenne>=16&&moyenne<18){
   	printf("sm est vlide on mention tre bien");
   	
   }else{if(moyenne>=18&&moyenne<=20){
   	printf("bravo");
   }else{if(moyenne<10){
   	printf("non valide");
   }
   }
   }
   }
   }
   }




    return 0;
}


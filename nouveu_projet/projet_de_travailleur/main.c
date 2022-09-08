#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom_de_travailleur;
    char prenom_de_travailleur;
    char cin;
    char cne;
    float slaire_net;
    float salaire_totale;
    int age;
    int nombre_de_fils;
    int benef;
    int totale_de_benef;
    printf("donner le nom:");
    scanf("%s",&nom_de_travailleur);
    printf("donner le prenom:");
    scanf("%s",&prenom_de_travailleur);
    printf("donnee le cin:");
    scanf("%s",&cin );
    printf("donnee le cne:");
    scanf("%s",&cne );
    printf("donner le nombre des fils:");
    scanf("%d",&nombre_de_fils);
    for(int i=1;i<=nombre_de_fils;i++){
        printf("donner lage:");
        scanf("%d",&age);
    }
    if(age<6){
        int benef1=200;
    }else if(age>=6&&age<12){
       int benef2=400;
    }else if(age>=12&&age<18){
        int benef3=800;
    }

    totale_de_benef =benef1+benef2+benef3;

printf("le benef totale est:%d",totale_de_benef);


    return 0;
}

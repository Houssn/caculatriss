#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct Vehicule1;
struct Vehicule1 // uniquement pour répondre à la question 1
{
char couleur[10],matricule[12],marque[10],modele[10];
int puissance,nbplaces;
char etat[10];
};
typedef struct matricule matricule; // question 2 première partie
struct matricule
{char nb[7];
int annee ;
int wilaya;
};
typedef struct Vehicule Vehicule; // réponse à la question 2
struct Vehicule
{
char couleur[10],marque[10],modele[10];
matricule m;
int puissance,nbplaces;
char etat[10];
};
main ()
{
FILE *f=fopen("FPARC.dat","w");
int N;char couleur[10];
lecture:
printf ("donnez le nombre de vehicules \n");
while (1)
{
scanf ("%d",&N);
if (N > 0 && N < 21 ) break;
else printf ("ERREUR veuillez retaper le nombre");
}
Vehicule t[20],tmp;
int i;
for (i=0;i<N;i++)
{
printf ("donnez le premier champs du matricule du vehicule\n");
scanf ("%s",&tmp.m.nb);
fflush(stdin); //permet de libérer l'espace tampon pour ne pas avoir de bugs de lecture
printf ("donnez l'annee du vehicule \n");
scanf ("%d",&tmp.m.annee);
fflush(stdin);
printf ("donnez la wilaya du vehicule \n");
scanf ("%d",&tmp.m.wilaya);
fflush(stdin);
printf ("donnez le modele du vehicule\n");
scanf ("%s",&tmp.modele);
fflush(stdin);
printf ("donnez la marque du vehicule\n");
scanf ("%s",&tmp.marque);
fflush(stdin);
printf ("donnez la couleur du vehicule\n");
scanf ("%s",&tmp.couleur);
fflush(stdin);
printf ("donnez la puissance du vehicule\n");
scanf ("%d",&tmp.puissance);
fflush(stdin);
printf ("donnez le nombre de places dans le vehicule \n");
scanf ("%d",&tmp.nbplaces);
fflush(stdin);
printf ("decrivez l'état du vehicule \n");
fflush(stdin);
scanf ("%s",&tmp.etat);
fwrite(&tmp, sizeof (Vehicule), 1, f); // 3eme question
}
fclose (f);
f=fopen("FPARC.dat","r");if (f == NULL) printf ("fichier non cree");
system ("pause");
printf ("donnez la couleur voulue \n");
scanf ("%s",&couleur);
fflush (stdin);
while (1)
{
if (feof (f)) break;
fread(&tmp, sizeof (Vehicule), 1, f);
if (strcmp(tmp.couleur,couleur) == 0)
{
printf ("Vehicule %d : %s%d%d \n %s \n  %s \n %d \n",tmp.m.nb,tmp.m.annee,tmp.m.wilaya,tmp.marque,tmp.modele,tmp.puissance);
}
}
fclose (f);
f=fopen("FPARC.dat","r");
int tabstat[49];
for (i=0;i<N;i++) tabstat[i]=0;
while (!feof (f))
{
fread(&tmp, sizeof (Vehicule), 1, f);
tabstat[tmp.m.wilaya]++;
}
fclose (f);
system("pause");
for (i=1;i<=48;i++) // 4eme question
{
printf ("wilaya %d : %d \n",i,tabstat[i]);
}
f=fopen("FPARC.dat","r");
int somme=0;
for (i=0;i<N;i++)
{
fread(&tmp, sizeof (Vehicule), 1, f);
somme+=tmp.m.annee;
}
fclose (f);
printf ("age moyen du parc auto est : \n %d \n",2016-somme/N); // dernière question
system("pause");
return 0;
}

#include "bibliotheque_td.h"
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int* creation_tableau_int(int n)
{
	int *tab=malloc(n *sizeof(int));
	if(tab==NULL)
	{
		printf("Erreur d'allocation mémoire!\n");
		exit(1);
	}
	return(tab);
}
float* creation_tableau_float(int n)
{
	float *tab=malloc(n * sizeof(float));
	if(tab==NULL)
	{
		printf("Erreur d'allocation mémoire !\n");
		exit(1);
	}
	return(tab);
}
void remplir_tableau_int(int *tab,int n)
{
	int i;
	printf("==== Remplissage du tableau de int ====\n");
	for(i=0;i<n;i+=1)
	{
		printf("Élément %d : ",i+1);
		scanf("%d",&tab[i]);
	}
}
void remplir_tableau_float(float *tab,int n)
{
	int i;
	printf("==== Remplissage du tableau de float ====\n");
	for(i=0;i<n;i+=1)
	{
		printf("Éléments %d :",i+1);
		scanf("%f",&tab[i]);
	}
}
int somme_int(int *tab,int n)
{
	int i;
	int somme=0;
	for(i=0;i<n;i+=1)
	{
		somme+=tab[i];
	}
	return(somme);
}
float somme_float(float *tab,int n)
{
	int i;
	int somme=0;
	for(i=0;i<n;i+=1)
	{
		somme+=tab[i];
	}
	return(somme);
}
int valtab_max_int(int *tab,int n)
{
	int i,max;
	max=tab[0];
	for(i=0;i<n;i+=1)
	{
		if(tab[i]>max)
		{
			max=tab[i];
		}
	}
	return(max);
}
float valtab_max_float(float *tab,int n)
{
	int i;
	float max;
	max=tab[0];
	for(i=0;i<n;i+=1)
	{
		if(tab[i]>max)
		{
			max=tab[i];
		}
	}
	return(max)
}
void signe_produit(float a,float b)
{
	if ((a<0 && b<0)||(a>0 && b>0))
	{
		printf("Produit Positif\n");
	}
	else
	{
		printf("Produit Négatif\n");
	}
}
void echange(float a,float b,float c)
{
	float t;
	t=a;
	a=b;
	b=c;
	c=t;
	printf("%f\n%f\n%f\n",a,b,c);
}
float somme(float a,float b)
{
	float somme=a+b;
	return(somme);
}
float moyenne(float a,float b)
{
	float moyenne=(a+b)/2;
	return(moyenne);
}
void resolution_second_degre(float a,float b,float c)
{
	float x1,x2,d,x,f,z;
	d=b*b-(4*a*c);
	if (a==0 && b==0)
	{
		printf("Il n'y a pas de x à trouvé\n");
	}
	else if (a==0&&b!=0)
	{
		x=-c/b;
		printf("x= %f\n",x);
	}
	else if (d>0)
	{
		x1=(-b-sqrt(d))/(2*a);
		x2=(-b+sqrt(d))/(2*a);
		printf("x1=%f\n",x1);
		printf("x2=%f\n",x2);
	}
	else if (d==0)
	{
		x=-b/(2*a);
		printf("x=%f\n",x);
	}
	else
	{
		d=-d;
		f=-b/(2*a);
		z=(sqrt(d))/(2*a);
		printf("x1=%f + %fi\n",f,z);
		printf("x2=%f - %fi\n",f,z);
	}
}
float max(float a,float b,float c)
{
	float max=a;
	if(b>max)
	{
		max=b;
	}
	if(c>max)
	{
		max=c;
	}
	return(max);
}
void nombre_1_n(int n)
{
	int i;
	for(i=1;i<n;i+=1)
	{
		printf("%d ",i);
	}
	printf("\n");
}
void nombre_pair_1_n(int n)
{
	int i;
	for(i=1;i<n;i+=1)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
			printf("\n");
}
void diviseur(int n)
{
	int i;
	for(i=1;i<=n;i+=1)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
}
void factorielle(int n)
{
	int i,f=1;
	for(i=1;i<=n;i+=1)
	{
		f=f*i;
	}
	printf("%d\n",f);
}

void arguments(int argc,char *argv[])
{
	if(argc<2)
	{
		printf("Arguments manquants\n");
		exit(0);
	}
	char *nom_fonction=argv[1];
	if(strcmp(nom_fonction,"signe_produit")==0)
	{
		float a=atof(argv[2]);
		float b=atof(argv[3]);
		signe_produit(a,b);
	}
	if(strcmp(nom_fonction,"echange")==0)
	{
		float a=atof(argv[2]);
		float b=atof(argv[3]);
		float c=atof(argv[4]);
		echange(a,b,c);
	}
	if(strcmp(nom_fonction,"somme")==0)
	{
		float a=atof(argv[2]);
		float b=atof(argv[3]);
		float s=somme(a,b);
		printf("%f\n",s);
	}
	if(strcmp(nom_fonction,"moyenne")==0)
	{
		float a=atof(argv[2]);
		float b=atof(argv[3]);
		float m=moyenne(a,b);
		printf("%f\n",m);
	}
	if(strcmp(nom_fonction,"resolution_second_degre")==0)
	{
		float a=atof(argv[2]);
		float b=atof(argv[3]);
		float c=atof(argv[4]);
		resolution_second_degre(a,b,c);
	}
	if(strcmp(nom_fonction,"max")==0)
	{
		float a=atof(argv[2]);
		float b=atof(argv[3]);
		float c=atof(argv[4]);
		float m=max(a,b,c);
		printf("Max=%f\n",m);
	}
	if(strcmp(nom_fonction,"nombre_1_n")==0)
	{
		int n=atoi(argv[2]);
		nombre_1_n(n);
	}
	if(strcmp(nom_fonction,"nombre_pair_1_n")==0)
	{
		int n=atoi(argv[2]);
		nombre_pair_1_n(n);
	}
	if(strcmp(nom_fonction,"diviseur")==0)
	{
		int n=atoi(argv[2]);
		diviseur(n);
	}
	if(strcmp(nom_fonction,"factorielle")==0)
	{
		int n=atoi(argv[2]);
		factorielle(n);
	}
	if(strcmp(nom_fonction,"creation_tableau_int")==0)
	{
		int n=atoi(argv[2]);
		int *tab_int=creation_tableau_int(n);
		remplir_tableau_int(tab_int,n);
		free(tab_int);
	}	
	if(strcmp(nom_fonction,"creation_tableau_float")==0)
	{
		int n=atoi(argv[2]);
		float *tab_float=creation_tableau_float(n);
		remplir_tableau_float(tab_float,n);
		free(tab_float);
	}
	if(strcmp(nom_fonction,"somme_int")==0)
	{
		int n=atoi(argv[3]);
		int *tab=atoi(argv[2]);
		si=somme_int(tab,n);
		printf("%d\n",si);
	}
	if(strcmp(nom_fonction,"somme_float")==0)
	{
		int n=atoi(argv[3]);
		float *tab=atof(argv[2]);
		sf=somme_float(tab,n);
		printf("%f\n",sf);
	}
	if(strcmp(nom_fonction,"valtab_max_int")==0)
	{
		int *tab=argv[2];
		int n=atoi(argv[3]);
		val=valtab_max_int(tab,n);
		printf("Max=%d\n",val);
	}
	if(strcmp(nom_fonction,"valtab_max_float")==0)
	{
		float *tab=argv[2];
		int n=atoi(argv[3]);
	i	val=valtab_max_float(tab,n);
		printf("Max=%f\n",val);
	}
}

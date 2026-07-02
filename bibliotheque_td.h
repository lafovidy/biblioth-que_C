#ifndef td_h
#define td_h
int* creation_tableau_int(int n);
float* creation_tableau_float(int n);
void remplir_tableau_int(int *tab,int n);
void remplir_tableau_float(float *tab,int n);
int somme_int(int *tab,int n);
float somme_float(float *tab,int n);
int valtab_max_int(int *tab,int n);
float valtab_max_float(float *tab,int n);
void signe_poduit(float a,float b);
void echange(float a,float b,float c);
float somme(float a,float b);
float moyenne(float a,float b);
void resolution_second_degre(float a,float b,float c);
float max(float a,float b,float c);
void nombre_1_n(int n);
void nombre_pair_1_n(int n);
void diviseur(int n);
void factorielle(int n);
void arguments(int argc,char *argv[]);
#endif

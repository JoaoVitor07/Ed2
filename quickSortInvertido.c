#include <stdio.h>

void troca(int v[], int i,int j){
  int temp;
  temp=v[i];
  v[i]=v[j];
  v[j]=temp;
}

int particao(int v[],int esq,int dir){
  int i, fim;

  fim=esq;
  for(i=esq+1;i<=dir;i++){
    if(v[i]>v[esq]) {
       fim=fim+1;
       troca(v,fim,i);
    }
  }
  troca(v,esq,fim);
  return fim;
}

void quicksort(int v[], int esq, int dir){
  int i;
  if(esq>=dir) return;
  i=particao(v,esq,dir);
  quicksort(v,esq,i-1);
  quicksort(v,i+1,dir);
}

void imprime(int *a, int N){
  int i;
  printf("\n Elementos: ");
  for (i=0;i<N;i++) printf("%d ",a[i]);
  printf("\n");
}

int main()
{
    int a[] = {4,5,6,2,8,9};
    int t=6;
    quicksort(a,0,t-1);
    imprime(a,t);


    return 0;
}

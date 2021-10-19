#include<iostream>
#include<math.h>
using namespace std;

int dividir(int vetor[], int esq, int dir){
    int aux;
    int cont=esq;

for(int i=esq+1; i<=dir; i++){
    if(vetor[i]<vetor[esq]){
        cont++;
        aux=vetor[i];
        vetor[i]=vetor[cont];
        vetor[cont]=aux;
    }
}
aux=vetor[esq];
vetor[esq]=vetor[cont];
vetor[cont]=aux;

return cont;
}

void quick(int vetor[], int esq, int dir){
    int pos;
if(esq<dir){
    pos = dividir(vetor, esq, dir);
    quick(vetor, esq, pos-1);
    quick(vetor, pos+1, dir);
}
}

int main(){

    int vetor[]={3,5,8,1,9,2,7,0,6};
    int n=10;

    quick(vetor, 0, n);
    cout<<"-----Vetor ordenado------"<<endl;
    for(int i=0; i<n; i++){
        cout<<" | "<<vetor[i];
    }
    return 0;
}

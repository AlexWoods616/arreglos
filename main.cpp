#include <iostream>

using namespace std;

int impri(int arr[],int tam){
    for (int i=0;i<tam;i++)
        cout << arr[i] << '\t';
}

int suma(int arr[],int tam){
    int sum=0;
    for (int i=0;i<tam;i++)
        sum += arr[i];
    return sum;
}

int recsum(int arr[],int tam){
    if (tam==0)
        return 0;
    else
        return arr[tam-1]+recsum(arr,--tam);
}

void invertir(int arr[],int tam){
    int v=tam/2;
    tam-=1;
    for (int i=0;i<tam;i++){
        int c=arr[i];
        arr[i]=arr[tam];
        arr[tam--]=c;
    }
}

void recinvert(int arr[], int tam){
    int v=tam/2;
    int i=0;
    tam-=1;
    if(v==i)
        return;
    else{
        int c=arr[i];
        arr[i]=arr[tam];
        arr[tam--]=c;
        i++;
        //recinvert(arr,tam);
    }

}

void bubble(int arr[],int tam){
    for (int i=1; i<tam; i++)
        for (int j=0; j<tam - 1; j++)
            if (arr[j] > arr[j+1]){
                int me = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = me;}
}

void inser(int arr[],int tam){
    int i,pos,aux;
    for (i=0;i<tam;i++){
        pos=i;
        aux=arr[i];
        while ((pos>0)&&(arr[pos-1]>aux)){
            arr[pos]=arr[pos-1];
            pos--;
        }
        arr[pos]=aux;
    }
}

/*void qs(int arr[],int izq, int der){
    int i=izq, d=der,tpm;
    int me=arr[(izq+der)/2];
    while(i<=d){
        while(arr[i]<me)
            i++;
        while(arr[i]>me)
            d--;
        if(i<=d){
            tpm=arr[i];
            arr[i]=arr[d];
            arr[d]=tpm;
            i++;
            d--;
        }
    }
    if (izq<d)
        qs(arr,izq,d);
    if (i<der)
        qs(arr,i,der);
}*/

int main()
{

    int x[5]={1,2,3,4,5};

    impri(x,5);
    cout << endl;
    cout << endl;
    /*cout << suma(x,5);
    cout << endl;
    cout << endl;
    invertir(x,5);
    impri(x,5);
    cout << endl;
    cout << endl;
    bubble(x,5);
    impri(x,5);
    cout << endl;
    cout << endl;
    inser(x,5);
    impri(x,5);
    cout << endl;
    cout << endl;
    qs(x,0,5);
    impri(x,5);
    cout << endl;
    cout << endl;*/
    cout << recsum(x,5);
    cout << endl;
    cout << endl;
    recinvert(x,5);
    impri(x,5);


}

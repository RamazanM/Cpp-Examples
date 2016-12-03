/*
Verilen sayının her basamağındaki rakamı toplayan uygulama.
*/

#include<iostream>
#include<math.h>
using namespace std;

int basamak_bul(int sayi);
int diziTopla(int dizi[],int size);

int main(){
  int sayi;
  cout<<"Sayıyı giriniz:";
  cin>>sayi;
  int basamak_sayisi=basamak_bul(sayi);
  int basamak[basamak_sayisi];

  for( int i = basamak_sayisi-1 ; i>=0 ; i--){
    basamak[i]=sayi/pow(10,i);
    cout<<basamak[i]<<endl;
    sayi-=basamak[i]*pow(10,i);
  }
  cout<<diziTopla(&basamak[0],basamak_sayisi)<<endl;
  return 0;
}

int basamak_bul(int sayi){
  int basamak_count=0;
  while((int)(sayi/pow(10,basamak_count))!=0) basamak_count+=1;
  return basamak_count;
}

int diziTopla(int *dizi,int size){
  int toplam=0;
  for(int i=0 ; i<size ;i++ ){
    toplam+=dizi[i];
  }
  return toplam;
}

#include <iostream>
#include <string>

using namespace std;

struct Member{
  int id;
  string isim;
  int yas;
};
typedef Member uye;

int uye_sayisi=3;

void uyeYazdir(uye gelen);

int main() {
  uye uyeler[uye_sayisi];
  for(int i=0 ; i<uye_sayisi ; i++){
    uyeler[i].id=i+1;
    cout<<i+1<<". üyenin adını giriniz:";
    cin>>uyeler[i].isim;
    cout<<i+1<<". üyenin yaşını giriniz:";
    cin>>uyeler[i].yas;
  }
  for(int i=0 ; i<uye_sayisi ; i++){
    uyeYazdir(uyeler[i]);
  }
  return 0;
}

void uyeYazdir(uye gelen){
  cout<<"Üyenin"<<endl<<" Id'si:"<<gelen.id<<", İsmi:"<<gelen.isim<<", Yaşı:"<<gelen.yas<<endl;
}

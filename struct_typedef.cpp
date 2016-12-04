#include <iostream>
#include <string>
using namespace std;

struct Member{
  int id;
  string isim;
  int yas;
};

typedef Member uye;

int main() {
  uye uyeler[5];
  for(int i=0 ; i<5 ; i++){
    uyeler[i].id=i+1;
    cout<<i+1<<". üyenin adını giriniz:";
    cin>>uyeler[i].isim;
    cout<<i+1<<". üyenin yaşını giriniz:";
    cin>>uyeler[i].yas;
  }
  for(int i=0 ; i<4 ; i++){
    cout<<"Üye "<<i+1<<"'in"<<endl<<" Id'si:"<<uyeler[i].id<<", İsmi:"<<uyeler[i].isim<<", Yaşı:"<<uyeler[i].yas<<endl;
  }
  return 0;
}

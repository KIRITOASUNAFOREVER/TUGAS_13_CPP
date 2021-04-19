#include <iostream>
using namespace std;

struct rumah {
    string tipe_rumah;
    int jumlah_kamar;
    float luas_rumah;
    float tinggi_rumah; 
    string pemilik_rumah;
};

int main(){
    rumah rumah1;
    rumah rumah2;
    
    cout <<"Inputkan Tipe Rumah    : "; cin >>rumah1.tipe_rumah;
    cout <<"Inputkan Jumlah Kamar  : "; cin >>rumah1.jumlah_kamar;
    cout <<"Inputkan Luas Rumah    : "; cin >>rumah1.luas_rumah;
    cout <<"Inputkan Tinggi Rumah  : "; cin >>rumah1.tinggi_rumah;
    cout <<"Inputkan Pemilik Rumah : "; cin >>rumah1.pemilik_rumah;
    cout <<endl;
    
    cout <<"Inputkan Tipe Rumah    : "; cin >>rumah2.tipe_rumah;
    cout <<"Inputkan Jumlah Kamar  : "; cin >>rumah2.jumlah_kamar;
    cout <<"Inputkan Luas Rumah    : "; cin >>rumah2.luas_rumah;
    cout <<"Inputkan Tinggi Rumah  : "; cin >>rumah2.tinggi_rumah;
    cout <<"Inputkan Pemilik Rumah : "; cin >>rumah2.pemilik_rumah;
    
    return 0;
}   

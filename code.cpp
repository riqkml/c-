#include <iostream>
#include <math.h>

using namespace std;
 
float volume(float p, float l, float t){
    float V;
    V = p * l * t;
    return V;
}

float luasPermukaan(float p, float l, float t){
    float V;
    V = 2 * ( p * l + p * t + l * t );
    return V;
}

float panjang(float v, float l, float t){
    float V;
    V = v / l / t;
    return V;
}

float lebar(float v, float p, float t){
    float V;
    V = v / p / t;
    return V;
}

float tinggi(float v, float p, float l){
    float V;
    V = v / p / l;
    return V;
}

float diagonalBidang(float p, float l, float t){
    float d1,d2,d3;
    
    d1 = sqrt(pow(p,2) + pow(l,2));
    d2 = sqrt(pow(p,2) + pow(t,2));
    d3 = sqrt(pow(l,2) + pow(t,2));
    
    cout << "d1 = " << d1 << " d2 = " << d2 << " d3 = " << d3;
}

float diagonalRuang(float p, float l, float t){
    float dr;
    
    dr = sqrt((pow(p,2) + pow(l,2) + pow(t,2)));
    
    return dr;
}

float luasBidangDiagonal(float p, float l, float t){
    float lbd;
    float d1,d2,d3,bd1,bd2,bd3;
    
    d1 = sqrt(pow(p,2) + pow(l,2));
    d2 = sqrt(pow(p,2) + pow(t,2));
    d3 = sqrt(pow(l,2) + pow(t,2));
    
    bd1 = d1 * t;
    bd2 = d2 * l;
    bd3 = d3 * p;
    
    cout << "bd1 = " << bd1 << " bd2 = " << bd2 << " bd3 = " << bd3;
}


int main()
{
  int pilihan;
  char ulang;
  float v, p, l, t;
  float show;
  do
  {
    cout << "## C++ Balok  ##" << endl;
    cout << "==============================" << endl;
    cout << "1. Volume" << endl;
    cout << "2. Luas Permukaan" << endl;
    cout << "3. Panjang " << endl;
    cout << "4. Lebar" << endl;
    cout << "5. Tinggi" << endl;
    cout << "6. Diagonal Bidang" << endl;
    cout << "7. Diagonal Ruang" << endl;
    cout << "8. Luas Bidang Diagonal" << endl;
    cout << endl;
 
    cout << "Pilihan anda: ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1: 
        cout << "masukan panjang balok: ";
        cin >> p;
     
        cout << "masukan lebar balok: ";
        cin >> l;
     
        cout << "masukan tinggi balok: ";
        cin >> t;
        
        show = volume(p, l, t);
        cout << "Volume = " << show;
        break;
    case 2:
           cout << "masukan panjang balok: ";
        cin >> p;
     
        cout << "masukan lebar balok: ";
        cin >> l;
     
        cout << "masukan tinggi balok: ";
        cin >> t;
        
        show = luasPermukaan(p, l, t);
        cout << "Luas Permukaan = " << show;
        break;
    case 3:
        cout << "masukan Volume Balok: ";
        cin >> v;
     
        cout << "masukan lebar balok: ";
        cin >> l;
     
        cout << "masukan tinggi balok: ";
        cin >> t;
        
        show = panjang(v, l, t);
        cout << "Panjang = " << show;
        break;
    case 4:
          cout << "masukan Volume Balok: ";
        cin >> v;
     
        cout << "masukan panjang balok: ";
        cin >> p;
     
        cout << "masukan tinggi balok: ";
        cin >> t;
        
        show = lebar(v, p, t);
        cout << "Lebar = " << show;
        break;
    case 5:
            cout << "masukan Volume Balok: ";
        cin >> v;
     
        cout << "masukan panjang balok: ";
        cin >> p;
     
        cout << "masukan lebar balok: ";
        cin >> l;
        
        show = lebar(v, p, l);
        cout << "Tinggi = " << show;
        break;
     case 6:
        cout << "masukan panjang balok: ";
        cin >> p;
     
        cout << "masukan lebar balok: ";
        cin >> l;
        
        cout << "masukan tinggi balok: ";
        cin >> t;
        
        show = diagonalBidang(p, l, t);
        break;
    case 7:
        cout << "masukan panjang balok: ";
        cin >> p;
     
        cout << "masukan lebar balok: ";
        cin >> l;
        
        cout << "masukan tinggi balok: ";
        cin >> t;
        
        show = diagonalRuang(p, l, t);
        cout << "Diagonal Ruang = " << show;
        break;
      case 8:
        cout << "masukan panjang balok: ";
        cin >> p;
     
        cout << "masukan lebar balok: ";
        cin >> l;
        
        cout << "masukan tinggi balok: ";
        cin >> t;
        
        show = luasBidangDiagonal(p, l, t);
        break;
    default:
        cout << "Pilihan tidak tersedia" << endl;
    }
    cout << endl;
 
    cout << "Ingin memilih pilihan lain (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
 
  cout << "Terimakasih...";
 
  cout << endl;
  return 0;
}
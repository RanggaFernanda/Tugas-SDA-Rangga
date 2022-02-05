#include <iostream>

using namespace std;

int main (){

 float L, a, t;
 
 cout << "=================================\n";
 cout << "Menghitung Luas Segitiga\n";
 cout << "=================================\n\n";
 
 cout << "Masukkan panjang alas \t\t: ";
 cin >> a;
 cout << "Masukkan tinggi segitiga \t: ";
 cin >> t;

 
 L = (a*t)/2;
 
 cout << "\n";
 
 cout << "L = (a x t)/2\nL = (" << a << " x " << t << ")/2" << endl;
 cout << "Luas segitiga tersebut adalah = " << L << " cm"<<endl;
 
 return 0;
 }
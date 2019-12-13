#include<iostream>
using namespace std;
 int main()
 {
 	int a,r,tot;
 	int batas=10;
 	int *rakasiwi=&tot;
 	
 	cout<<"Masukkan Angka Perkalian = " ;
 	cin>>r;
 	
 	for (a=1; a<=batas; a++){
 		tot = a*r;
 		cout<<a<<"x"<<r<<"="<<*rakasiwi<<endl;
	 }
	 
	  return 0;
 }

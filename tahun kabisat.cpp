#include <iostream>
using namespace std;

int main(){
  int thn;
  cout << "Masukkan tahun: ";
  cin >> thn;
  if (thn%4 == 0)
  {
  	if(thn%100 == 0)
	  {
  		if(thn%400 == 0)
		  {
  			cout << thn << " adalah tahun kabisat "<<endl;	
		  }
		  else
		  {
		  	cout << thn << " bukan tahun kabisat "<<endl; 
		  }
	  }
	  else 
	  {
	  	cout << thn << " adalah tahun kabisat "<<endl;
	  }
  }
  else
  {
  	cout << thn << "bukam tahun kabisat"<<endl;
  }

return 0;
}

#include <iostream>
using namespace std;

int buscar(int n){

int arr[] = {1,3,4,5,17,18,31,33};
int low = 0;
int high = 7;
int mid = (low + high) / 2;

if (arr[mid]!=n && (low==high)) return (-1);

}


int main (){
	
	int x;
	cout << "Ingrese el numero a buscar: " << endl;
	cin >> x;
	
	if (buscar (x) == -1)
		cout << "El elemento no se encontro" << endl;
	else
		cout << "El elemento se encuentra en la casilla: " << buscar(x) << endl;
		
		
system ("pause");

return 0;

}





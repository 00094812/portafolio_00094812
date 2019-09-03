#include <iostream>
using namespace std;

int a[]={1,3,4,5,17,18,31,33};

int main (){
	
	int x = 0;
	cout << "Ingrese el numero a buscar: " << endl;
	cin >> x;
	
	if (i==-1)
		cout << "El elemento no se encontro";
	else
		cout << "El elemento se encuentra en la casilla; " << i << endl;

}

int busqueda (){
	
int low = 0;
int high = 7;
int i;

if (low > high)
	return (-1);
mid = (low + high) / 2;

if (x == a[mid])
	return (mid);

if (x < a [mid])
	search for x in a[low] to a[mid-1];
else
	search for x in a[mid+1] to a [high];

return (i);
}



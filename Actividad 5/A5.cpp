#include <iostream>
using namespace std;

int multi(int a, int b){
	
	if (a==0 or b==0){
		return 0;
	}else{
		return a + multi(a, b-1);	 
	}

}

int main(){
	
	int n1, n2, m;
	
	cout << "Digite primer numero a multiplicar: ";
	cin >> n1;
	cout << "Digite segundo numero a multiplicar: ";
	cin >> n2;
	
	m = multi(n1,n2);
		
	cout << "El resultado es: " << m << endl;
	

system ("pause");
	
}



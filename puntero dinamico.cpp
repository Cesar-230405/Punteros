#include<iostream>
using namespace std;
main(){
	
	int total=0,*p_notas;
	p_notas=new int[total];
	char res;	
	do{
		cout<<"Ingrese nota "<<total<<": ";
		cin>>p_notas[total];
		total++;
		cout<<"Desea ingresar otro número (s/n)";
		cin>>res;
	}while(res == 'S' || res == 's');
	
	cout<<" ------------- Mostrar ---------------"<<endl;
	for (int i=0;i<total;i++){
		cout<<"Nota ("<<i<<"): "<<*p_notas<<endl;
		p_notas++;
	}
	delete[] p_notas;
	
	
	system("pause");
}
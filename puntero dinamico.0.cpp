#include<iostream>
using namespace std;
main(){
	
	int fil=0, col=0, **pm_notas;
	
	cout<<"Ingrese la cantidad de Estudiantes: ";
	cin>>fil;
	cout<<"Ingrese la cantidad de notas: ";
	cin>>col;
	
	pm_notas = new int*[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i]= new int[col];
	} 
	for (int i=0;i<fil;i++){
		for(int ii=0;ii<col;ii++){
			cout<<"Estudiante "<<i<<", Nota: "<<ii<<" : "<<endl;
			cin>>*(*(pm_notas+i)+ii);
		}
	}
	system("pause");
}
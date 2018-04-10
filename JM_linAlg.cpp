#include <iostream>
#include <typeinfo>
#include <math.h>

using namespace std;
float ** matrix_product(int m1, int n1, int m2, int n2, float **mat1, float **mat2 );
float ** get_matrix(int m, int n);
int main(){
	float **mat1=get_matrix(3,2);
	return 0;
}

float ** matrix_product(int m1, int n1, int m2, int n2, float **mat1, float **mat2 ){
	float **mat_prod= new float*[m1];
	for (int i=0; i<m1; i++){
		mat_prod[i]=new float [n1];
	}
	for (int i=0;i<m1; i++){
		for(int j=0; j<n2;j++){
			mat_prod[i][j]=0;
			for(int k=0; k<m2;k++){
				for(int s=0; s<n2;s++){
					mat_prod[i][j]=+ mat1[k][s]*mat2[s][k];
				}
			}
		}
	}
	return mat_prod;
}

float ** get_matrix(int m, int n){
	float **mat= new float*[m];
	for (int i=0; i<m; i++){
		mat[i]=new float [n];
	}
	cout <<"\n      Matriz de "<<m<<"x"<<n<<"creada \n";
	for (int i=0; i<m; i++){
		for(int j=0; j<n;j++){
			cout<<"\n Ingrese el valor de ("<<i<<","<<j<<") : ";
			float elemento;
			cin>>elemento;
			mat[i][j]=elemento;
		}
	}
	cout<<"\n        Matriz que ud escribio";
	for (int i=0; i<m; i++){
		cout<<"\n";
		for(int j=0; j<n;j++){
			cout<<mat[i][j]<<" ";
		}
	}
	cout<<"\n";
	return mat;
}






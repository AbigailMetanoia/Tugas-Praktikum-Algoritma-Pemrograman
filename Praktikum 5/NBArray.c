//Nama File : NBArray.c
//Deskripsi : Menghitung dan menampilkan besarnya
// penjumlahan sub array/tabel T.
//Nama      : Abigail Metanoia Melody
//NIM       : 24060121120038
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	int i,j,T,N,NBArray;
	
	//Algoritma
	printf("Membuat Program Penjumlahan sub Array \n");
	printf("Masukan nilai N : ");
	scanf("%d", &N);
	
	
	
	for(i = 1; i <= N; i++){
			int T[i-1];
			NBArray = 0;
			
	
	for(i = 1; i <= N; i++){
		for(j = i; j <= N; j++){
			NBArray = NBArray + T[i-1];
		}
	}
}

	printf("%d", NBArray);
	return 0;
}

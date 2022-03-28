//Nama File : SelisihKetinggian.c
//Deskripsi : Menghitung dan menampilkan besarnya
// selisih ketinggian terbesar puncak bukut dengan lembah bukit atau sebaiknya
//Nama      : Abigail Metanoia Melody
//NIM       : 24060121120038
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	int i,j,T,N, jarak, terKecil, terBesar;
	
	//Algoritma
	printf("Membuat Program Selisih Ketinggian \n");
	printf("Masukan nilai N : ");
	scanf("%d", &N);
	
	
	
	for(i = 1; i <= N; i++){
			int T[i];
			terKecil = T[0];
			terBesar = T[0];
		
	}
	for(j = 1; j <= N; j++){
			int T[j];
			if (T[j] >= terBesar){
				terBesar = T[j];
			}
			else if (T[j] >= terKecil){
				terKecil = T[j];
			}		
	}
	jarak = terBesar - terKecil;
	printf("%d", jarak);
	
	return 0;
}

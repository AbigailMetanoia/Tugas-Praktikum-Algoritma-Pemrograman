//Nama File : UpahKerja.c
//Deskripsi : Menghitung dan menampilkan biaya
// upah kerja pada layar.
//Nama      : Abigail Metanoia Melody
//NIM       : 24060121120038
//Kelas     : B1

#include <stdio.h>

int main (){
	//Kamus
	int i,g,U1;
	
	//Algoritma
	printf("Membuat Program Upah Kerja \n");
	printf("Jam Kerja per Minggu  : ");
	scanf("%d", &i);
	printf("Golongan Karyawan  : ");
	scanf("%d", &g);
	
	if ( i < 40) {
		U1 = i * (1000 + (i-2)*500);
		printf(" Upah kerja sebesar : %d", U1);
    }
	else{
		U1 = i * (1000 + (i-2)*500)*40 + ((i-40)*(1000 + (g-1)*500));
		printf(" Upah kerja sebesar : %d", U1);
	}
	return 0;
}

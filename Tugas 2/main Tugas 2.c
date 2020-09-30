#include <stdio.h>
#include <string.h>

// Maurisa Arimbi Putri
// 19081010192
// Pemlan A

/*inisialisasi*/
struct film {
	char judul[80];
	char durasi[15];
	char rilis[5];
	float rate;
};

typedef struct film film; //inisialisasi tipe baru

/*main process*/
void main() {
	film film;
	
	printf("Judul\t\t: ");
	gets(film.judul);
	printf("Durasi\t\t: ");
	gets(film.durasi);
	printf("Tahun Rilis\t: ");
	gets(film.rilis);
	printf("Personal Rate\t: ");
	scanf("%f",&film.rate);
	
	printf("\n\n===============REKOMENDASI FILM===============\n\n");
	printf("Judul\t\t: %s\n",film.judul);
	printf("Durasi\t\t: %s\n",film.durasi);
	printf("Tahun Rilis\t: %s\n",film.rilis);
	printf("Personal Rate\t: %f",film.rate);
	
	return 0;
	
}

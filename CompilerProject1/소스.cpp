#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "testdata.txt"
#define STsize 1000 //string table 크기
#define HTsize 100 //hash table 크기

typedef struct HTentry* HTpointer;
typedef struct HTentry {
	int index; //string table의 identifier 인덱스
	HTpointer next; //다음 identifier의 포인터
} HTentry;

enum errorTypes { noerror, illsp, illid, overst };
typedef enum errorTypes ERRORtypes;




HTpointer HT[HTsize];
char ST[STsize];


ERRORtypes err;

FILE* fp;
char input;



//Initialize - open input file
void initialize() {
	fp = fopen(FILE_NAME, "r");
	input = fgetc(fp);
}
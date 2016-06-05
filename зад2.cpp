#include <stdio.h>

int main(){
	
	FILE* fp;
	double prices[10000];
	int n = 0;
	
	fp = fopen("dj2008.txt", "r");	
	if(!fp) {
		printf("\nERROR!\n");
		return -1;
	}
	
	while(!feof(fp)) {
		fscanf(fp, "%lf\n", &prices[n]);
		printf("p[%d] = %lf\n", n, prices[n]);
		n++;
	}	
	
	fclose(fp);
	
	return 0;
}

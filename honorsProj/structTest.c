#include <stdio.h>
#include <stdlib.h>

struct Image{
	int Rows;
	int Cols;
};

void printDimensions(struct Image image){
	printf("Rows %d\nCols %d\n", image.Rows, image.Cols);
}

int main()
{
	FILE *fp
	char buffer[1000];
	fp = fopen("cameraman_part_36x36.png", "rb");
	
	fread(buffer, sizeof(buffer), 1, fp);

	printf("%s\n", buffer);

	if(fp != NULL){
		fclose(fp);
	}

	//while (fscanf(fp, "\n") != EOF) {}

	//fseek(fp, SEEK_SET, 0);

	//fread(buffer, strlen(c)+1, 1, fp);
	//printf("%s\n", buffer);
	
	return(0);
	newImage.Rows = 10;
	newImage.Cols = 20;
	printDimensions(newImage);
}

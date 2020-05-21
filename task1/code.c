#include <stdio.h>
#include <stdlib.h>

void main(void){
	struct student{
		int id;
		char name[10];
		float percentage;
	};
	int i;
	struct student std[2];
	//student 1
	std[0].id = 1;
	strcpy(std[0].name,"saad");
	std[0].percentage = 54.54;
	//student 2
	std[1].id = 2;
	strcpy(std[1].name,"ali");
	std[1].percentage = 44.54;
	//student 3
	std[2].id = 3;
	strcpy(std[2].name,"sahil");
	std[2].percentage = 57.40;
	printf("----Student Records----");
	
	for(i=0; i<=2; i++){
		printf("\n\n Record of Student %d",i+1);
		printf("\n id: %d",std[i].id);
		printf("\n Name : %s",std[i].name);
		printf("\n Percentage: %.2f",std[i].percentage);
	}
}
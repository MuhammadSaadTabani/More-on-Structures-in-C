#include <stdio.h>
#include <stdlib.h>

void main(void){
	struct c_info{
		char name[20];
		long cnic;
		char city[20];
	};
	struct vote{
		int vote_id;
		char area[20];
		int UC;
		struct c_info candidate;
	};	
	
	struct vote vote1;
	//vote1 record
	vote1.vote_id = 1001;
	strcpy(vote1.area,"saddar");
	vote1.UC = 5;
	strcpy(vote1.candidate.name,"Saad");
	vote1.candidate.cnic = 4578912345678;
	strcpy(vote1.candidate.city,"Karachi");

	//diplaying Vote;
	printf("\n\nVote ID: %d",vote1.vote_id);
	printf("\nArea: %s",vote1.area);
	printf("\nUC: %d",vote1.UC);
	printf("\nCandidate Information: ");
	printf("\nName: %s",vote1.candidate.name);
	printf("\nCnic: %ld",vote1.candidate.cnic);
	printf("\nCity : %s",vote1.candidate.city);	
}
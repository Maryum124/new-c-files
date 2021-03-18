#include <stdio.h>
#include <conio.h>

int flight_booking();
int flight_availibility();


int seats[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
char con='y';
int i;
int j=0;

	int main(){
	char menu;

	printf(" \n Press 'b' for booking. \n Press 'a' to check seats availibity.\n Press 's' to stop.\n : ");
	menu = getche();

	while(menu=='a'|| menu=='b'){
		if(menu=='a'){
		flight_availibility();
		printf(" \nPress 'b' for booking. \n Press 'a' to check seats availibity.\n Press 's' to stop.\n : ");
		menu = getche();
		printf("\n");
		}

	else if(menu=='b'){
	flight_booking();
	printf(" \nPress 'b' for booking. \n Press 'a' to check seats availibity.\n Press 's' to stop.\n : ");
	menu = getche();
	printf("\n");
				}
		}
	}		

int flight_booking(){
	char con='y';
	char reserve;
	int mul_seat=0;
	int seat_no=0;
	int k;

	while(con=='y'){
	int flag=0;
	printf("\nPlease enter 'm' to reserve multiple seats or 's' for single seat: ");
	reserve = getche();
	if(reserve=='m'){
	printf("\nPlease enter number of seats you want to reserve: ");
	scanf("%d",&mul_seat);
		for(k=0;k<mul_seat;k++){
		printf("\nPlease enter seat number to reserve (starting from 0): ");
		scanf("%d",&seat_no);
	if(seats[seat_no]==1){
	printf("The seat is already taken.\n");
	printf("Do you wish to book more seats? 'y/n': ");
	con=getche();
	printf("\n");
	j++;
	seat_no=0;
	flag++;}
	else if(flag==0){
	seats[seat_no]=1;
	printf("\n");
	j++;
	seat_no=0;
		}
	}
	printf("Do you wish to book more seats? 'y/n': ");
	con=getche();
	}
	else if(reserve=='s'){

	printf("\nPlease enter seat number to reserve (starting from 0): ");
	scanf("%d",&seat_no);
		if(seats[seat_no]==1){
		printf("The seat is already taken.\n");
		printf("Do you wish to book more seats? 'y/n': ");
		printf("\n");
		con=getche();
		j++;
		seat_no=0;
}
	else{
	seats[seat_no]=1;
	printf("\n");
	printf("Do you wish to book more seats? 'y/n': ");
	printf("\n");
	con=getche();
	j++;
	seat_no=0;
			}
		}
	}
}



int flight_availibility(){
char con='a';
for(i=0;i<20;i++){
printf(" %d  ",seats[i]);}
printf("\n\n",seats[i]);
}

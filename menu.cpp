#include <stdio.h>
#include <conio.h>

int vowel2();
int capital();
int encript();
int decript();

int main (){
	char name[50];
	char op, vowel2,capital, encript, decript;
	
 printf("\nPress V for vowels");
 printf("\nPress C for capitals");
 printf("\nPress E for encript");
 printf("\nPress D for decript");
 op=getche();

printf("\nEnter your full name:");
gets(name);	

if (op=='v'){
  for (int i=0; i<50; i++)
  
  {
  if  (name[i]=='a' || name[i]== 'e' || name[i]=='i' || name[i]== 'o' || name[i]== 'u')
  {
  	name[i]=name[i]-32;
  	
  }
}
printf("%s", name);
   
  }
  

 if (op== 'c'){
for (int i=0; i<50; i++){

name[i]=name[i]-32;
}
printf("%s", name);
}


if (op== 'e'){
	for (int i=0; i<50; i++){

name[i]=name[i]+90;
}
printf("%s", name);
}

	
 if (op=='d'){
 		for (int i=0; i<50; i++){
//name[i]=name[i]+90;
name[i]=name[i]-90;
}
printf("%s", name);
}
}



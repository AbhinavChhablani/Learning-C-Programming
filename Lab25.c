#include <stdio.h> 
int main(){
	char c;
	printf("Enter The Input :");
	scanf("%c",&c);
	if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
		printf("The Given Input is A Vowel ");
	}
	else if (
    c=='b'||c=='c'||c=='d'||c=='f'||c=='g'||c=='h'||c=='j'||c=='k'||c=='l'||c=='m'||
    c=='n'||c=='p'||c=='q'||c=='r'||c=='s'||c=='t'||c=='v'||c=='w'||c=='x'||c=='y'||c=='z'||
    c=='B'||c=='C'||c=='D'||c=='F'||c=='G'||c=='H'||c=='J'||c=='K'||c=='L'||c=='M'||
    c=='N'||c=='P'||c=='Q'||c=='R'||c=='S'||c=='T'||c=='V'||c=='W'||c=='X'||c=='Y'||c=='Z'
   ) {
	   printf("The Given Input Is A Consonant");
   }
   else {
	   printf("The Input is Non-Alphabetic"); 
   }
   return 0;
}
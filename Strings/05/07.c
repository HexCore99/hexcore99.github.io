
#include<stdio.h>
int main(){


char string[100];
int string_length = 0;

while(1){
scanf("%c", &string[string_length]);

if(string[string_length] == '\n')  break;

string_length++;

}

int flag = 1;


for(int i = 0; i<string_length; i++){

	if(string[i] != string[string_length-i-1]) {
		flag = 0;
		break;
	}
}

if(flag) {
	printf("Palindrome\n");
}
else{
	
	printf("Not Palindrome\n");
}
	return 0;
}

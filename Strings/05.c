#include<stdio.h>
int main(){


char string[100];
int string_length = 0;

while(1){
scanf("%c", &string[string_length]);

if(string[string_length] == '\n')  break;


if(string[string_length] >='A' && string[string_length] <= 'Z'){
	string[string_length] = string[string_length] + 32;
}


string_length++;

}

for(int i = 0; i<string_length; i++){

printf("%c",string[i]);
}
	return 0;
}

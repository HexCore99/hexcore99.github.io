#include<stdio.h>

int main(){

int length = 0;

int string[100];
int track_string = 0;

while(1){
scanf("%c", &string[track_string]);

if(string[track_string] == '\n') break;

track_string++;
}



printf("%d\n",track_string - 1);

for(int i = 0; i<track_string; i++){
	printf("%c", string[i]);
}
	return 0;
}

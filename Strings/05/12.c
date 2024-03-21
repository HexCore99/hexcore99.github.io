#include<stdio.h>
int main(){

char string[100];
int lngth = 0;

while(1){
scanf("%c",&string[lngth]);

if(string[lngth] == '\n') break;
else if(string[lngth] == ' '){
	string[lngth] = '\n';
}
lngth++;

}

for(int i= 0; i<lngth; i++){
	
	printf("%c",string[i]);
}


	return 0;
}

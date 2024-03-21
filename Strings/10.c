#include<stdio.h>
int main(){

char str1[100], str2[100];

int str1_lngth = 0, str2_lngth= 0;

while(1){
scanf("%c",&str1[str1_lngth]);

if(str1[str1_lngth] == '\n') break;

str1_lngth++;
}


while(1){
scanf("%c",&str2[str2_lngth]);

if(str2[str2_lngth] == '\n') break;

str2_lngth++;
}

for(int i=0; i<str2_lngth; i++){
str1[str1_lngth + i]=str2[i];
}

for(int i=0; i<str1_lngth+str2_lngth; i++){
	printf("%c",str1[i]);
}
	return 0;
}

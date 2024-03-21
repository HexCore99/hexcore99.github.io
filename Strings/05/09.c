
#include<stdio.h>
int main(){

char str1[100], str2[100];

int str1_lngth = 0, str2_lngth = 0;


while(1){
scanf("%c",&str1[str1_lngth]);

if(str1[str1_lngth] == '\n') break;

str1_lngth++;
}


for(int i =0; i<=str1_lngth; i++){

str2[i] = str1[i];

}

for(int i = 0; i<=str1_lngth;i++){
	printf("%c",str2[i]);
}

	return 0;
}

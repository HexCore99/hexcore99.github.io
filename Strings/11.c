
#include<stdio.h>
int main(){

char str[100], sub_Str[100];
int lngth = 0, sub_lngth = 0;
int flag = 0;

while(1){
scanf("%c",&str[lngth]);

if(str[lngth] == '\n') break;


lngth++;

}


while(1){
scanf("%c",&sub_Str[sub_lngth]);

if(sub_Str[sub_lngth] == '\n') break;


sub_lngth++;

}

for(int i = 0; i<lngth; i++){
	int track = 0, count = 0;

if(str[i] == sub_Str[0]){
	track = i;	
	for(int j=0; j<sub_lngth; j++){
	
		if(str[track] == sub_Str[j]){
			count++;
		}else break;


			track++;
	}
}
if(count == sub_lngth){
	flag = 1;
	break;
}


}
 if(flag) printf("Substring\n");
 else printf("Not substring\n");
	return 0;
}

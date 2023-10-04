#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(){
	
	int i,j,n;
	char p[100];
	srand(time(NULL));
	
	printf("ingrese la palabra");
	scanf("%s",&p[20]);
	
	while(getchar()!='\0');
	
    char sec[10000];
    
    for(i=0;i<20;i++){
    	
    	sec[i] = rand()%92+26;
    }
    for(i=0;i<10000;i++){
    	
    	printf("%c",sec[i]);
    	
	}	
	
	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			
			if(sec[j]==p[i]){
				printf("%c",p[i]);
			}
			
		}
	}
	
		
}
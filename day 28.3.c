#include<stdio.h>

 enum week{
	
	Mon,Tue,Wed,Thu,Fri,Sta,Sun=20
};

int main(){
	
	int i;
	
	for (i=Mon;i<Sun;i++){
		
		printf("%d\t",i);
		
	}
	
	return 0;
	
}

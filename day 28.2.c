#include<stdio.h>

struct marks {
	
	int roll_no;
	char name[30];
	float chem_marks,maths_marks,phy_marks;
	float percentage;
	
};

int main (){
	
	int i;
	int percentage;
	
	struct marks o[5];
	
	for(i=0 ; i<=4 ; i++){
		
		printf("Student %d\n",i+1);
		
		printf("\nEnter roll no. : ");
        scanf("%d", &o[i].roll_no);
        
        printf("Enter name : ");
        scanf("%s",o[i].name);
        
		printf("Enter Chemistry marks : ");
        scanf("%f", &o[i].chem_marks);
        
		printf("Enter Maths marks :");
        scanf("%f", &o[i].maths_marks);
        
		printf("Enter Physics marks :");
        scanf("%f", &o[i].phy_marks);
        
        printf("\n");
		
	}
		
	
	for(i=0 ; i<=4 ; i++){
		
	    printf("Student %d\n",i+1);
	    
	    percentage = (o[i].chem_marks + o[i].maths_marks + o[i].phy_marks)/300*100;
	    
		printf("Percentage : %d%\n\n", percentage);
		
	}
	
	return 0 ;
}

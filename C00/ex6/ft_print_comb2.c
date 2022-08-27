#include<stdio.h>
#include<unistd.h>

void ft_print_comb2(void){
	
	for(int i=0;i<=99;i++){
		int j=1;
		
		
		while(j<=99){
			if(i==98){
				printf("98 99");
				return;
			}
			if(j>i){
				if(i<10) printf("%d",0);
				printf("%d ",i);
				if(j<10) printf("%d",0);
				printf("%d, ",j);
				j++;
			}
			else{
				while(j<=i)
					j++;
			}

		}

	}
}

void fill_blank(int num){
	if(num < 10)
		printf("0");
	else return;
}


int main(){
	ft_print_comb2();
}


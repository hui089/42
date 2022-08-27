#include<unistd.h>
#include<stdio.h>
#include<string.h>
void print_str(char *str){
	
	int i;
	i=0;
	while(i<strlen(str)){
		printf("%c",str[i]);
		i++;	
	}

}

int main(){
	print_str("hello");
}



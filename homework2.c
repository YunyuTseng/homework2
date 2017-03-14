#include <stdio.h>
int main(void){
	char str[100];
	char str1[]="hello";
	char str2[]="add";
	char str3[]="help";
	char str4[]="exit";
	while(1){
		printf(">");
		scanf("%s",&str);
		if(strcmp(str,str1)==0){
			printf("hello world\n");
		}else if(strcmp(str,str2)==0){
			printf("1 + 2 = 3\n");
		}else if(strcmp(str,str3)==0){
			printf("you can enter \"hello\", \"add\" or \"exit\".\n");
		}else if(strcmp(str,str4)==0){
			printf("exiting...\n");
			printf("Goodbye and see you next time.\n");
			return 0;
		}else{
			printf("please enter \"help\".\n");
		}
	}
	return 0;
}

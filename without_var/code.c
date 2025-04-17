#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>



bool IsPasswordOK(void) {
char Password[40];
gets(Password);
putchar('\n');
if (0 == strncmp(Password,"goodpass",8) && strlen(Password)==8){
    printf(Password);
    puts(" is a correct password");
    return true;
}
else {
    printf(Password);
    puts(" is not a correct password, Try Again:");
    gets(Password);
    if (0 == strncmp(Password,"goodpass",8) && strlen(Password)==8){
    	printf(Password);
    	puts(" is a correct password");
    	return true;
	}	
    else {
    printf("Out of tries\n");
}
    return false;
}
}

int main(void) {
setvbuf(stdin,(char *)0x0,2,0);
setvbuf(stderr,(char *)0x0,2,0);
setvbuf(stdout,(char *)0x0,2,0);
bool PwStatus;
puts("Enter password:");
PwStatus = IsPasswordOK();
if (PwStatus == false){
    puts("Access denied");
    exit(-1);
}
else{
     puts("Access Granted");
     system("/bin/sh");
     }
}

// C Program to Determine the Unicode Code Point at a Given Index
#include <stdio.h> 
int main() 
{ 
char arr[10] = "GeEkS"; 
int code; 
printf("The String is %s\n", 
		arr); 
	
for (int i = 0; arr[i] != '\0'; i++) 
{ 
	code = arr[i]; 
	printf("The Unicode Code Point At %d is:%d\n", 
			i, code); 
} 
return 0; 
}

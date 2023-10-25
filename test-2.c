// C program to demonstrate the use of C string.h
//header file
#include <stdio.h>
#include <string.h>

int main()
{

	int d;
	char s1[]="sadman",s2[]="sad";
	d= strcmp(s1,s2);
  if(d==0)
    printf("Strings are equal \n");
  else
    printf("Strings are not equal\n");
	

	return 0;
}

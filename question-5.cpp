//5. WAP to calculate the length of String using printf function

#include<stdio.h>
int main()
{
	char s[] = "Md Shahzad Alam";
    int i;

    for (i = 0; s[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);
    return 0;
}
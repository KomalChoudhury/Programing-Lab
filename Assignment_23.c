#include<stdio.h>
int main(){
	char c;
	printf("enter the character: ");
	scanf("%c", &c);
	if(c == 'a'|| c == 'A'|| c == 'e'||c == 'E'||c == 'i'||c == 'I'||c == 'o'||c == 'O'||c == 'u'||c == 'U')
	{
		printf("c is vowel");
		}
	else{
		printf("c is consonant");
	}
	return 0;
}

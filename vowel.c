#include<stdio.h>
int main()
{
char c;
int isLowerCaseVowel,isUpperCaseVowel;
printf("Enter an alaphabet:");
scanf("%c",&c);
isLowerCaseVowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
isUpperCaseVowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
if(isLowerCaseVowel||isUpperCaseVowel)
printf("%c is vowel",c);
else
printf("%c is consanant",c);
return(0);
}




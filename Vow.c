#include<stdio.h>
void main()
{
char b;
int lowercasevowel,uppercasevowel;
printf("enter the alphabet");
scanf("%c",b);
lowercasevowel=(b=='a'||b=='e'||b=='i'||b=='o'||b=='u');
uppercasevowel=(b=='A'||b=='E'||b=='I'||b=='O'||b=='U');
if(uppercasevowel&&lowercasevowel)
{
printf("the alphabet is a vowel");
}
else
{
printf("the alphabet is a consonant");
}
getch();
}

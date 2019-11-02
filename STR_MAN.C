#include<stdio.h>
#include<conio.h>
#include<string.h>

void copy()
{
	char str[20],str_c[20];
	clrscr();
	printf("\n\nEnter a string : ");
	scanf("%s",&str);
	strcpy(str_c,str);
	printf("\nCopied string is : %s",str_c);
}

void app()
{
	char str[20],str_c[20];
	clrscr();
	printf("\n\nEnter a string : ");
	scanf("%s",&str);
	printf("\n\nEnter another string : ");
	scanf("%s",&str_c);
	strcat(str,str_c);
	printf("\n\nNew string is : %s",str);
}

void comp()
{
	char str[20],str_c[20];
	int check=0;
	clrscr();
	printf("\n\nEnter a string : ");
	scanf("%s",&str);
	printf("\n\nEnter another string : ");
	scanf("%s",&str_c);
	check = strcmp(str,str_c);
	if(check==0)
	{
		printf("\n\nThe strings are same");
	}
	else
	{
		printf("\n\nThe strings are not same");
	}
}

void rev()
{
	char str[20];
	clrscr();
	printf("\n\nEnter a string : ");
	scanf("%s",&str);
	printf("\n\nReversed string is : %s",strrev(str));
}

void up()
{
	char str[20];
	clrscr();
	printf("\n\nEnter a string : ");
	scanf("%s",&str);
	printf("\n\nUpper case string is : %s",strupr(str));
}

void low()
{
	char str[20];
	clrscr();
	printf("\n\nEnter a string : ");
	scanf("%s",&str);
	printf("\n\nLower case string is : %s",strlwr(str));
}

void search()
{
	char str[20];
	char *ptr, chr;
	clrscr();
	printf("\n\nEnter a string : ");
	scanf("%s",&str);
	printf("\n\nEnter character to be searched : ");
	scanf("%s",&chr);
	ptr = strchr(str, chr);
	if(ptr!=NULL)
	{
		printf("The character %c is at position: %d\n", chr, ptr-str);
	}
	else
	{
		printf("The character was not found\n");
	}
}

void len()
{
	char str[20];
	clrscr();
	printf("\n\nEnter a string : ");
	scanf("%s",&str);
	printf("\n\nLength of the string is : %d",strlen(str));
}

void to_num()
{
	char str[20],str1[20],str2[20][6],arr[10][6] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	int i=0;
	clrscr();
	printf("\n\nEnter a number in words (1 digit only) : ");
	scanf("%s",&str1);
	strcpy(str,strlwr(str1));
	while(i<10)
	{
		if(strcmp(str,arr[i])==0)
		{
			printf("\n\nYou have entered : %d",i);
			break;
		}
		i++;
	}
}

void to_str()
{
	char arr1[10][6] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
	int i=0, arr[10] = {0,1,2,3,4,5,6,7,8,9}, num;
	clrscr();
	printf("\n\nEnter a number (1 digit only) : ");
	scanf("%d",&num);
	while(i<10)
	{
		if(num==arr[i])
		{
			printf("\n\nYou have entered : %s",arr1[i]);
			getch();
			break;
		}
		i++;
	}
}

void main()
{
	int ans;
	clrscr();
	printf("\n\nSelect option from below :-");
	printf("\n\n1) Copy \t2) Append \t3) Compare \t4) Reverse");
	printf("\n\n5) To upper\t6) To lower\t7) Search\t8) Find length");
	printf("\n\n9) String to number\t\t10) Number to string");
	printf("\n\nSelect option : ");
	scanf("%d",&ans);

	switch (ans)
	{
		case 1:
			copy();
			break;

		case 2:
			app();
			break;

		case 3:
			comp();
			break;

		case 4:
			rev();
			break;

		case 5:
			up();
			break;

		case 6:
			low();
			break;

		case 7:
			search();
			break;

		case 8:
			len();
			break;

		case 9:
			to_num();
			break;

		case 10:
			to_str();
			break;

		default:
			exit(0);
	}
}
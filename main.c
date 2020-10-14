#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int firstnumber;
	int secondnumber;
	char oppration;
	
	printf("Please Enter The First Number:\n");
	scanf("%d",&firstnumber);
	printf("Please Enter The Second Number:\n");
	scanf("%d",&secondnumber);
	printf("Please Enter Your Oppration Type(+ , - , / , *):\n");
	scanf(" %c",&oppration);
	
	if(oppration == '/' && secondnumber == 0)
	{
		while(secondnumber == 0)
		{
			printf("Second Number Cant Be Zero If You Want To Dvide Enter Another Number :\n");
			scanf("%d",&secondnumber);
		}	
	}
	
	int result;
	
	switch(oppration)
	{
		case '+':
			result = firstnumber + secondnumber;
			break;
		case '-':
			result = firstnumber - secondnumber;
			break;
		case '*':
			result = firstnumber * secondnumber;
			break;
		case '/':
			result = firstnumber / secondnumber;
			break;
	}
	
	printf("Your Result Is %d \n",result);
	system("PAUSE");
	return 0;
}

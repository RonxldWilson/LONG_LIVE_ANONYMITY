
void MESSAGE(void){
	
	/*THOSE OF YOU WHO ARE READING THIS YOU HAVE MADE IT THIS FAR
		ALL THE MAIN COMPONENT OF THIS MESSAGING APP LIE IN THIS 
		PARTICULAR C FILE*/
	
	char PASSWORD[30]="BLUFF";
	int SIZE_OF_PASS=0;
	char MESSAGE[1000]="THIS IS THE FIRST MESSAGE TRANSMISSION FROM LONG LIVE ANONYMITY MESSAGING\n THE DETAILS OF WAY TO CREATE A FILE LIKE THIS IS GIVEN HERE\n https://github.com/RonxldWilson/LONG_LIVE_ANONYMITY  \nCOPY PASTE THE URL IN A BROWSER \n ALL FURTHER CONTACTS SHALL BE MADE IN THIS ORDER";
	char HINT[100]="THE NAME OF YOUR CRUSH OR IT IS JUST 'BLUFF'(ALL CAPS)";
	char ENTERED_PASSWORD[30];
	int choice,i;
	/*THE ABOVE MENTIONED IS THE PLACE WHERE YOU CAN ENTER THE PASSWPRD AND THE MESSAGE*/
	do{
	choice=1;
	system("cls");
	display();
	display();
	printf("\n\t\t\tLONG LIVE ANONYMITY MESSAGE\n");
	display();	
	display();
	printf("\n\t HINT:%s",HINT);
	
	for(SIZE_OF_PASS=0;PASSWORD[SIZE_OF_PASS]!='\0';SIZE_OF_PASS++);
	printf("\n\t PASSWORD LENGTH:%d",SIZE_OF_PASS);
	
	printf("\n\t ENTER PASSWORD:");
	/*SCANING OF PASSWORD IN SUCH A WAY TO GET ***  IN PLACE OF LETTERS*/	
	i=0;
	do{
		ENTERED_PASSWORD[i]=getch();
		if(ENTERED_PASSWORD[i]!='\r')
		{
			printf("*");
		}
		i++;
		
	}while(ENTERED_PASSWORD[i]!='\r'&&i<=SIZE_OF_PASS);
	ENTERED_PASSWORD[i-1]='\0';
	
	if(strcmp(PASSWORD,ENTERED_PASSWORD)==0){
		CLEAR();
		display();
		display();
		printf("\n\tACCESS GRANTED\t\n");
		display();
		display();
		printf("\n\tPRESS ANY KEY TO READ THE MESSAGE\n");
		getch();
			CLEAR();
			display();
			printf("\n\tTHE MESSAGE:\n");
			display();
			printf("%s",MESSAGE);
			
			printf("\n\n\n\tPRESS ANY KEY TO CONTINUE\n");
			getch();
	}
	else{
		CLEAR();
		display();
		display();
		printf("\n\tACCESS DENIED");
		display();
		display();
		printf("\n\tPRESS 0 TO TRY AGAIN OR PRESS ANY KEY TO EXIT\n");
		scanf("%d",&choice);
	}
	
	}while(choice==0);
}

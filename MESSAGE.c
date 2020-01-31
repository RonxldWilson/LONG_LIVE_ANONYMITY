
void MESSAGE(void){
	
	/*THOSE OF YOU WHO ARE READING THIS YOU HAVE MADE IT THIS FAR
		ALL THE MAIN COMPONENT OF THIS MESSAGING APP LIE IN THIS 
		PARTICULAR C FILE*/
	
	char PASSWORD[30]="PASSWORD";
	char MESSAGE[1000]="THIS IS THE FIRST MESSAGE TRANSMISSION FROM LONG LIVE ANONYMITY MESSAGING";
	char HINT[100]="PASSWORD ITSELF(ALL CAPS)";
	char ENTERED_PASSWORD[30];
	int choice;
	/*THE ABOVE MENTIONED IS THE PLACE WHERE YOU CAN ENTER THE PASSWPRD AND THE MESSAGE*/
	do{
	choice=1;
	system("cls");
	display();
	display();
	printf("\n\t\tLONG LIVE ANONYMITY MESSAGE\n");
	display();	
	display();
	printf("\n\t HINT:%s",HINT);
	printf("\n\t ENTER PASSWORD:");
	fflush(stdin);
	scanf("%s",ENTERED_PASSWORD);
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

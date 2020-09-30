#include<stdio.h>
#include<string.h>

 int X;				//Current X position _Input
 int Y;				//Current Y position _Input
 char D[5];			//Current direction robot is facin _Input
 char S[100];			//For variable array
 int X_Out;			//Current X position  _OutPut
 int Y_Out;			//Current Y position _OutPut
 char D_Out[5];		// Current  directio  _OutPut

/*****************************************************
							North
							  ^
							  |
							  | 	
				West< --------|---------->EAST
							  | 					
							  |	
							  |		
							SOUTH



*******************************************************/

int main(void)
{
	int i,length;

	printf("\n Diggy Walking Robot \n");
	printf("Please Enter Give Following Inputs \n Current X position\n Current Y position \n Current direction robot is facing \n Walk string \n*[Please ENTER ALL STRINGS IN CAPITAL ONLY] ");
	scanf("%d %d %s %s",&X,&Y,&D,&S);//get Inputs from keyboard or command line
	//printf("\nWalk string =%s\n",S);
	length=strlen(S);
	//printf("\nLength=%d\n",length);
	//Copy value of X an Y Position 
	X_Out = X;
	Y_Out = Y;

	for(i=0;i<length;i++)
	{
		
		
		switch(S[i])
		{
			case 'R':
					if(!strcmp(D,"NORTH"))
					{
						strcpy(D,"EAST ");
						break;
					}
					if (!strcmp (D,"EAST "))
					{
						strcpy(D,"SOUTH");	
						break;
					}
					
					if (!strcmp (D,"SOUTH"))
					{
						strcpy(D,"WEST ");
						break;
					}
					
					if (!strcmp (D,"WEST "))
					{
						strcpy(D,"NORTH");
						break;
					}
						
					//printf("\nNew Direction :\t%s",D);					
					break;	
			case 'L':
					if(!strcmp(D,"NORTH"))
					{
						strcpy(D,"WEST ");
						break;
					}
					
					if (!strcmp (D,"EAST "))
					{
						strcpy(D,"NORTH");
						break;
					}
					
					if (!strcmp (D,"SOUTH"))
					{
						strcpy(D,"EAST ");
						break;
					}
					
					if (!strcmp (D,"WEST "))
					{
						strcpy(D,"SOUTH");		
						break;
					}						
					
					printf("\nNew Direction :\t%s",D);
					break;
			case'W':
					i++;//to get Unit value
					
					//printf("Walking Unit%d",(S[i]-48));// To Get Integer Equivalent of Character As character 0x30 means 0 ,0x31 means 1 like that.
					if(!strcmp (D,"NORTH"))
					{
						//printf("\nNORTH Walking");
						Y_Out += (S[i]-48);//Add	
						
					}
							
					if(!strcmp (D,"SOUTH"))
					{
						//printf("\nSOUTH Walking");
						Y_Out -= (S[i]-48);//Subtract
					}
					if(!strcmp (D,"EAST "))
					{
						//printf("\nEAST Walking");
						X_Out += (S[i]-48);//Add
					}
					if(!strcmp (D,"WEST "))
					{
							//printf("\nWEST Walking");
						X_Out -= (S[i]-48);//Subtract
					}
					
					break;
					
		}//End of Switch Case
	}//End Of For Loop
	
	printf("\n***FINAL OUTPUT****\n");
	printf("\n Current X position =%d\n",X_Out);
	printf("\n Current Y position =%d\n",Y_Out);
	printf("\n Current Direction =%s\n",D);	
	return 0;
}

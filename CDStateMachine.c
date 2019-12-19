#include<stdio.h>
 
int main()
{
	char str[10];
 
	initial: do{
		printf("\nCD player is without a CD. (L)oad or (Q)uit :");
		scanf("%s",str);
	}while(!(str[0]!='L'||str[0]!='l'||str[0]!='q'||str[0]!='Q'));
 
	if(str[0]=='q'||str[0]=='Q')
		goto quit;
	goto waiting;
 
	waiting: do{
		printf("(S)elect song or choose to select (R)andom :");
		scanf("%s",str);
	}while(!(str[0]!='s'||str[0]!='S'||str[0]!='r'||str[0]!='R'));
 
	if(str[0]=='s'||str[0]=='S')
		goto Playing;
 
	else{
		if (str[0]=='R'||str[0]=='r'){
			printf("Random Song is being played...");
			goto Option;
		}
		else
			goto waiting;
	}
 
	Option: do{
		printf("\nNow you can choose an option:(E)ject, (B)ack, (N)ext, (Z)pause & (P)lay\n");
		scanf("%s",str);
	}while(!(str[0]!='B'||str[0]!='b'||str[0]!='P'||str[0]!='N'||str[0]!='n'||str[0]!='p'||str[0]!='E'||str[0]!='e'));
	
	if (str[0]=='b'||str[0]=='B'||str[0]=='n'||str[0]=='N'||str[0]=='p'||str[0]=='P')
		goto Playing;
	else {
		if(str[0] == 'E' || str[0] == 'e'){
			printf("CD is ejected");
			goto initial;
		}

		else {
			if (str[0] == 'Z' || str[0] == 'z'){
				printf("Music is paused");
				goto Option2;
			}
			else
				goto Option;
		}
	}
 
	Playing:
		printf("Playing selected song...");
		goto Option;

	Option2:
		do{
		printf("\nPlease choose an option:(E)ject, (S)top &(P)lay\n");
		scanf("%s",str);
	}while(!(str[0]!='S'||str[0]!='s'||str[0]!='p'||str[0]!='P'));
		if (str[0] == 'S' || str[0] == 's'){
			printf("Music is stopped");
			goto Option;
		}
		else 
		{
			if(str[0] == 'E' || str[0] == 'e'){
				printf("CD is ejected");
				goto initial;
				}
			else
				if(str[0] == 'p' || str[0] == 'P')
					goto Playing;
		}

 
	quit: printf("Thank you, shutting down now.\n");

 
	return 0;
}

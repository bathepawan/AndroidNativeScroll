#include <stdio.h>

void vscroll(int XRes[10],int YRes[10],int loop)
{
char command[256]="input swipe ";
char command_up[256]="input swipe ";
//char space[2]="  ";
char temp[10];
int j;
strcat(command," ");
sprintf(temp,"%d",XRes[2]);
strcat(command,temp);
strcat(command," ");
sprintf(temp,"%d",YRes[8]);
strcat(command,temp);
strcat(command," ");
sprintf(temp,"%d",XRes[2]);
strcat(command,temp);
strcat(command," ");
sprintf(temp,"%d",YRes[3]);
strcat(command,temp);
strcat(command," ");
//printf("%s",command);

strcat(command_up," ");
sprintf(temp,"%d",XRes[2]);
strcat(command_up,temp);
strcat(command_up," ");
sprintf(temp,"%d",YRes[3]);
strcat(command_up,temp);
strcat(command_up," ");
sprintf(temp,"%d",XRes[2]);
strcat(command_up,temp);
strcat(command_up," ");
sprintf(temp,"%d",YRes[8]);
strcat(command_up,temp);
strcat(command_up," ");
//printf("%s",command_up);

for(j=0;j<loop;j++)
	{
		system(command);
		system(command);
		system(command);
		system(command);
		system(command_up);
		system(command_up);
		system(command_up);
		system(command_up);
	}

}

void hscroll(int XRes[10],int YRes[10],int loop)
{
char command[256]="input swipe ";
char command_left[256]="input swipe ";
//char space[2]="  ";
char temp[10];
int j;
strcat(command," ");
sprintf(temp,"%d",XRes[8]);
strcat(command,temp);
strcat(command," ");
sprintf(temp,"%d",YRes[5]);
strcat(command,temp);
strcat(command," ");
sprintf(temp,"%d",XRes[3]);
strcat(command,temp);
strcat(command," ");
sprintf(temp,"%d",YRes[5]);
strcat(command,temp);
strcat(command," ");
//printf("%s",command);

strcat(command_left," ");
sprintf(temp,"%d",XRes[3]);
strcat(command_left,temp);
strcat(command_left," ");
sprintf(temp,"%d",YRes[5]);
strcat(command_left,temp);
strcat(command_left," ");
sprintf(temp,"%d",XRes[8]);
strcat(command_left,temp);
strcat(command_left," ");
sprintf(temp,"%d",YRes[5]);
strcat(command_left,temp);
strcat(command_left," ");
//printf("%s",command_left);

for(j=0;j<loop;j++)
	{
		system(command);
		system(command);
		system(command);
		system(command);
		system(command_left);
		system(command_left);
		system(command_left);
		system(command_left);
	}

}

int main(int argc, char **argv)
{
int i;
int loop;
int X=1080,Y=1920;
int XRes[10],YRes[10];

if(argc<4)
{
printf("Syntax: %s  v/h XRes YRes [loopcount] ", argv[0]);
exit(-1);
}
char c=argv[1][0];
X=atoi(argv[2]);
Y=atoi(argv[3]);
loop=atoi(argv[4]);
	for(i=1;i<10;i++)	
	{
	XRes[i]= (int) ((X*(i*10))/100);
	YRes[i]= (int) ((Y*(i*10))/100);
//	printf("%d \t %d ", XRes[i],YRes[i]);
	}
	if(c=='v')
	{
	vscroll(XRes,YRes,loop);
	}else if(c=='h') 
	{
	hscroll(XRes,YRes,loop);
	} else 
	{
		printf("Invalid Syntax");
		printf("Syntax: %s  v/h XRes YRes [loopcount] ", argv[0]);
	}
	//scanf("%d",&i);
return i;
}
